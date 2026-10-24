// Given inputs a,d,n of AP
// Return the nth, n-1 th and n-2 th term of the AP
#include<iostream>
using namespace std;

int main() {
    int a, d, n;
    cin >> a >> d >> n;
    // edge case if we cant print (n-1) or (n-2) th numbers
    if(n <= 2){
        if(n == 1){
            cout << a << "\n";
        }
        else if(n == 2){
            cout << a << " " << a+d << "\n";
        }
        else{
            // if we can not even print n th number
            cout << "\n";
        }
    }
    else{
        int x = a + (n-3) * d; // n-2 th number in the AP
        cout << x << " " << x + d << " " << x + 2* d << "\n";
    }
    return 0;
}