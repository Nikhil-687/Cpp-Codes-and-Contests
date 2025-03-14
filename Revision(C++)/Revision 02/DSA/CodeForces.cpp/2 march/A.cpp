#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++) {
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int count = 0;
        if(n == 3){
            if(k == 3){
                if(a[0] < a[1] && a[1] < a[2]){cout << "1\n";}
                else cout << "0\n";
            }
            else{cout << "0\n";}
            goto X;
        }
        if(n == k){
            for(int i = 1;i < n;i++){
                if(a[i] > a[i-1]){}
                else{cout << "0\n";goto X;}
            }
            cout << "1\n";goto X;
        }
        for(int i = 0;i < n;i++){
            if(a[i] >= 0 && a[i] < k){}
            else goto X;
        }
        for(int i = 0;i < n-k+1;i++){
            if(a[i] == 0){
                for(int j = 0;j < k;j++){
                    if(a[i+j] == j){}
                    else {goto Y;}
                }
                count++;
            }
            Y:;
        } 
        cout << count << "\n";
        X:;
    }
}
