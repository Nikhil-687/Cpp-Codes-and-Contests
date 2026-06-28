#include <bits/stdc++.h>
using namespace std;
 

int32_t main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int judgment = 0;
        int i, z = 0;
        for(i = 0;i < n-1;i++){
            cout << "? " << 2*i + 1 << " " << 2*i + 2 << endl;
            cin >> judgment;
            // if(judgment == -1)
            // {
            //     cout << "Hello";
            //     return 0;
            // }
            if(judgment){
                cout << "! " << 2*i + 1  << endl;
                z = 1;
                break;
            }
        }
        n = 2* n;
        // if(!z){
        //     cout << "? " <<  n-3 << " " << n-2 << endl;
        //     cin >> judgment;
        // if(judgment == -1)
        //     {
        //         cout << "Hello";
                // return 0;

        //     }
        //     if(judgment){
        //         z = 1;
        //         cout << "! " << n-3 << endl;
        //     }
        // }
        if(!z){
            cout << "? " <<  n-3 << " " << n-1 << endl;
            cin >> judgment;
            // if(judgment == -1)
            // {
            //     cout << "Hello";
            //     return 0;
            // }
            if(judgment){
                z = 1;
                cout << "! " << n-3 << endl;
            }
        }
        if(!z){
            cout << "? " <<  n-2 << " " << n-1 << endl;
            cin >> judgment;
            // if(judgment == -1)
            // {
            //     cout << "Hello";
            //     return 0;
            // }
            if(judgment){
                z = 1;
                cout << "! " << n-2 << endl;
            }
        }
        if(!z){
            cout << "! " << n << endl;
        }
    }
    return 0;
}