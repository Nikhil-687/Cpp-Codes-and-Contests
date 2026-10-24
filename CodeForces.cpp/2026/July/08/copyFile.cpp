#include <cstdio>

class File {
public:
    File(const char* path) {
        fp = fopen(path, "r");
        out = fopen("output.txt", "w");
    }

    void output() {
        if (fp) {
            char buffer[256];
            while (fgets(buffer, sizeof(buffer), fp)) {
                fputs(buffer, out);
            }
        }
    }

    ~File() {
        fclose(fp);
        fclose(out);
    }

private:
    FILE* fp;
    FILE* out;
};

int main(){
    File f("example.txt");
    f.output();
    return 0;
}