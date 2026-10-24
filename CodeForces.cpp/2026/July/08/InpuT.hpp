#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Input {
private:
    string s;
    T value;
public:
    Input() {
        cin >> value;
    }
    T getValue() const {
        return value;
    }
    
};


int main() {
    Input<int> input;
    auto value = input.getValue();
    cout << "You entered: " << value << endl;
    return 0;
}