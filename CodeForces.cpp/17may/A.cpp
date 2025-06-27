#include<bits/stdc++.h>
using namespace std;


bool allOne(vector<int> &a) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != 1) return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(allOne(a)){
            cout << "YES\n";goto X;
        }
        for(int i = 1; i < n; i++) {
            if(a[i] == 0 && a[i-1] == 0){cout << "YES\n";goto X;}
        }
        cout << "NO\n";
        X: ;
    }
    return 0;
}