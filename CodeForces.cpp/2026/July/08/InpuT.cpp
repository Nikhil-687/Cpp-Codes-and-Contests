#include <bits/stdc++.h>
#include <source_location>
using namespace std;

template <typename T>
class Input {
private:
    int n, m;
    T value;
    ifstream in;
public:
    Input() {
        
    }
    T getValue(vector<int> sizes = {})  {
        if constexpr (is_same_v<T, int> || is_same_v<T, long long> ||
                  is_same_v<T, double> || is_same_v<T, char> ||
                  is_same_v<T, string>) {
            cin >> value;
        } else if constexpr (is_same_v<T, vector<int>>) {
            n = sizes[0];
            value.resize(n);
            for (int i = 0; i < n; i++) {
                cin >> value[i];
            }
        }
        return value;
    } 
    T getValueFromFile(const char * input,
                        const source_location loc = source_location::current())  {
        in.open(input);
        if (!in) {
            cerr << "Failed to open file at line " << loc.line() << "\n";
            return value;
        }
        if constexpr (is_same_v<T, int> || is_same_v<T, long> || is_same_v<T, long long> ||
                  is_same_v<T, unsigned int> || is_same_v<T, unsigned long long> ||
                  is_same_v<T, short> || is_same_v<T, double> || is_same_v<T, float> ||
                  is_same_v<T, bool>) {    
            if (!(in >> value)) {
                cerr << "Failed to read value (EOF or malformed) at line " << loc.line() << "\n";
            }
        } else if constexpr (is_same_v<T, char>) {
            if (!(in >> value)) {
                cerr << "Failed to read char (EOF or malformed) at line " << loc.line() << "\n";
            }
        } else if constexpr (is_same_v<T, string>) {
            if (!(in >> value)) {
                cerr << "Failed to read string (EOF or malformed) at line " << loc.line() << "\n";
            }
        }
        else if constexpr (is_same_v<T, vector<int>>) {
            if(! ( in >> n ) ){cerr << "Failed to read size (EOF or malformed) at line " << loc.line() << "\n";return value;}
            value.resize(n);
            cout << "N: " << n << "\n";
            for (int i = 0; i < n; i++) {
                if (!(in >> value[i])) {
                    cerr << "Unexpected EOF at index " << i << " at line " << loc.line() << "\n";
                    value.resize(i);
                    break;
                }
            }
        }
        return value;
    } 
    void display()  {
        if constexpr (is_same_v<T, int> || is_same_v<T, long> || is_same_v<T, long long> ||
                  is_same_v<T, unsigned int> || is_same_v<T, unsigned long long> ||
                  is_same_v<T, short> || is_same_v<T, double> || is_same_v<T, float> ||
                  is_same_v<T, bool> || is_same_v<T, char> || is_same_v<T, string>) {
            cout << value;
        } else if constexpr (is_same_v<T, vector<int>>) {
            for (int i = 0; i < n; i++) {
                cout << value[i] << " ";
            }
            cout << "\n";
        }
        // return value;
    }
    
};


int main() {
    Input<vector<int>> input = Input<vector<int>>();
    auto value = input.getValueFromFile("input.txt");
    input.display();

    return 0;
}