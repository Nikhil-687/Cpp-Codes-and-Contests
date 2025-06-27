#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long n;
        cin >> n;
        long long count = 1;
        while(n >= 4){
            count *= 2;
            n /= 4;
        }
        cout << count << "\n";
    }
    
}