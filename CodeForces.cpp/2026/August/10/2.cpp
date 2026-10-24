#include <bits/stdc++.h>
using namespace std;
 
template <typename X, typename Y> void swapargs(X &a, Y &b) {
    cout << a << " " << b << " are of differernt datatypes we cannot swap them" << endl;
}

template <typename T> void swapargs(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
    cout << "Swapped values under generic function 1" << endl;
}

int main() {
    int a = 10, b = 20;
    float c = 1.5, d = 2.5;
    char e = 'x', f = 'y';
    swapargs(a, b);
    swapargs(c, e);
    return 0;
}