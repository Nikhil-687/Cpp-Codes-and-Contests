#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        long long z = max(x, y);
        if(z == 1){cout << "1\n";goto X;}
        if(z == 2){
            if(x == 1){
                cout << "2\n";goto X;
            }
            else if(y == 1){
                cout << "4\n";goto X;
            }
            else{
                cout << "3\n";goto X;
            }
        }
        if(x == y){cout << (z*z + (z-1)*(z-1)+1)/2 << "\n";goto X;}
        if(z%2 == 0){
            // x = 1->x = 2 -> .... -> y = z, x = z -> y = z-1 -> ... -> y = 1
            long ans = 0;
            if(x == z){
                ans = (z*z + (z-1)*(z-1)+1)/2;
                ans+= z-y;
            }
            else{
                ans = (z-1)*(z-1) + x;
            }
            cout << ans << "\n";
        }
        else{
            // y = 1 -> y = 2 -> .... -> y = z, x = z -> x = z-1 -> ... -> x = 1
            long long ans = 0;
            if(y == z){
                ans = (z*z + (z-1)*(z-1)+1)/2;
                ans+= z-x;
            }
            else{
                ans = (z-1)*(z-1) + y;
            }
            cout << ans << "\n";
        }
        X:;
    }
    
}