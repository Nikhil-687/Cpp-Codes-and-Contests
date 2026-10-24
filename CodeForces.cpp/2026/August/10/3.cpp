#include <bits/stdc++.h>
using namespace std;
 

void myfunc(double a){
    double intpart;
    double fracpart;

    fracpart = modf(a, &intpart);
    cout << "Integer part: " << intpart << endl;
    cout << "Fractional part: " << fracpart << endl;
}

int main() {
    int a = 10, b = 20;
    float c = 1.5, d = 2.5;
    char e = 'x', f = 'y';

    myfunc(3.45);
    return 0;
}