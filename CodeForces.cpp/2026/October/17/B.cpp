#include <bits/stdc++.h>
using namespace std;
 

// Types
#define int long long

vector<string> a, b;

int diff(string s, string t){
    int cnt = 0;
    if(s.size()!= t.size())return 2;
    for(int i = 0;i < s.size();i++){
        if(s[i] != t[i]){
            if(!cnt)cnt ++;
            else return 2;
        }
    }
    return cnt;
}
 
int mp(string s){
    int id = -1;
    for(int i = 0;i < a.size();i++){
        if(a[i] == s){
            return i;
        }
        else if(diff(a[i], s) == 1){
            if(id == -1){
                id = i;
            }
            else id = -2;
        }
    }
    if(id == -2)return -1;
    return id;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n, m;
    cin >> n >> m;
    a.resize(n, "");
    b.resize(m, "");
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }

    vector<int> ans(n);

    for(int i = 0;i < m;i++){
        int x = mp(b[i]);
        if(x != -1){
            ans[x]++;
        }
    }

    for(auto i : ans){
        cout << i << "\n";
    }
    return 0;
}