#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<pair<int, int>> ans;
    while(t--){
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int diff = m;
        for(int i = l;i <= 0;i++){
            if(i+diff >= 0){l = i;r = i+diff;goto X;}
        }
        X:;
        pair<int, int> a;
        a.first = l;
        a.second = r;
        ans.push_back(a);

    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i].first << " " << ans[i].second << "\n";
    }
}