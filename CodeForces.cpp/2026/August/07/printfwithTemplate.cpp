#include <bits/stdc++.h>
using namespace std;

template<typename... Args>
void printf4(const string& fmt, Args&&... args) {
    // args is a "pack" - the compiler knows every real type at compile time
    ((cout << args << " "), ...);   // C++17 fold expression: prints each one
}

int main() {   
    std::string name = "Alice";
    std::vector<int> v = {1,2,3};
    printf4("test", name, 42, v);   // works! std::string and std::vector both fine
}