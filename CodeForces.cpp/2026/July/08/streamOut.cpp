#include <cstdio>
#include <vector>
#include <string>
using namespace std;

class File {
public:
    File(const char* input, const char* output) {
        in = fopen(input, "r");
        formate = fopen("formate.txt", "r");
        out = fopen(output, "w");
        grabInput(formate, Formate);
        grabInput(in, data);
    }

    void grabInput(FILE* in, vector<string>& data) {
        if (in) {
            char buffer[256];
            while (fgets(buffer, sizeof(buffer), in)) {
                data.push_back(buffer);
            }
        }
    }

    void displayInput() {
        for (const auto& line : Formate) {
            fputs(line.c_str(), out);
        }
        for (const auto& line : data) {
            fputs(line.c_str(), out);
        }
    }

    ~File() {
        fclose(in);
        fclose(formate);
        fclose(out);
    }
    
private:
    FILE* in;
    FILE* formate;
    FILE* out;
    vector<string> data, Formate;
};

int main(){
    File f("input.txt", "output.txt");
    // f.grabInput();
    f.displayInput();
    return 0;
}