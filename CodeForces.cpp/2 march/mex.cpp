#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, l, r;
    cin >> n >> l >> r;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    // solve
    if(n == l && l == r){
        sort(a.begin(), a.end());
        for(int i = 0;i < a.size();i++){
            if(a[i] == i){}
            else {cout << "0\n";goto X;}
        }
        cout << 1 << "\n";
        X:;
        return 0;
    }
    else if(l == r){
        if(l == 0){
            int count = 0; 
            for(int i = 0;i < a.size();i++){
                if(a[i] != 0){count++;}
            }
            cout << count << "\n";
            return 0;
        }
        else if(l == 1){
            int count = 0; 
            for(int i = 0;i < a.size();i++){
                if(a[i] == 0){count++;}
            }
            cout << count << "\n";
            return 0;
        }
        else{
            int count = 0; 
            for(int i = 0;i < a.size()-l+1;i++){
                if(a[i] == 0){
                    for(int j = 0;j < a.size() && j < l; j++){
                        if(a[i+j] == j){}
                        else{goto Y;}
                    }
                    count++;
                    a[i+l-1] = 0;
                }
                Y:;
            }
            cout << count << "\n";
            return 0;
        }
    }
}