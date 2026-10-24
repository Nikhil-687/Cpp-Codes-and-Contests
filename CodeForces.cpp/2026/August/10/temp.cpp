#include <bits/stdc++.h>
using namespace std;
 
template <typename T> void swapargs(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
    cout << "Swapped values under generic function" << endl;
}

void swapargs(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapped values under integer function" << endl;
}

template <> void swapargs<float>(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
    cout << "Swapped values under float function" << endl;
}

int main() {
    int a = 10, b = 20;
    float c = 1.5, d = 2.5;
    char e = 'x', f = 'y';
    swapargs(a, b);
    swapargs(c, d);
    swapargs(e, f);
    return 0;
}