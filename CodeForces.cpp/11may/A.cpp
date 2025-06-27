#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> a;
    for(int i = 0; i < t; i++){
        int n, m ,p, q;
        cin >> n >> m >> p >> q;
        if(n%p == 0){
            if((n/p)*q == m){a.push_back(1);}
            else{a.push_back(0);}
        }
        else{
            {a.push_back(1);}
        }
    }
    for(int i = 0; i < t; i++){
        if(a[i] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}