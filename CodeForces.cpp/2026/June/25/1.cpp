#include <bits/stdc++.h>
using namespace std;


long long M = 998244353;
// bool isPos(string s, string t){
//     if(s == t){
//             return 1;
//         }
//         else{
//             int ps = s[0], pt = s[0];
//             int cs = 0, ct = 0;
//             for(int i = 0;i < n;i++){
//                 if(ps != s[i]){cs++;ps = s[i];}
//                 if(pt != t[i]){ct++;pt = t[i];}
//             }
//             if(cs >= ct){
//                 return 1;
//             }
//             else{
//                 return 0;
//             }
//         }
// }

int par(string& s){
    int cnt= 0;
    for(int i = 1;i < s.size();i++){
        if(s[i] != s[i-1])cnt++;
    }
    return cnt;
}

// int ncr(int n, int r){
//     if(n == r || r == 0)return 1;
//     return ((long long)ncr(n-1, r-1) + ncr(n-1, r))% M;
// }
// vector<vector<unordered_map<int, long long>>> mp;
// long long solve(int cnt, char ch, int n, int i = 0){
//     if(cnt < 0){
//         return 0;
//     }
//     if(i == n-1){
//         if(cnt == 0)
//         return 1;
//         return 0;
//     }
//     if(mp[i][ch-'0'][cnt]){
//         return mp[i][ch-'0'][cnt];
//     }
//     // cout << i << " " << ch << " " << solve(cnt, ch, n, i+1) << ' ' <<  solve(cnt-1, '1' + '0' - ch, n, i+1) << "\n"; 
//     mp[i][ch-'0'][cnt] = ( solve(cnt, ch, n, i+1) + solve(cnt-1, '1' + '0' - ch, n, i+1) ) % M;

//     return mp[i][ch-'0'][cnt];
// }

// vector<vector<long long>> ncrT = {{1}};

int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        // mp.resize(0);
        // mp.resize(n, vector<unordered_map<int, long long>> (2));
        int cnt = par(s);
        
        long long sm = 0;
        // cout << cnt << " ";
        // cout << ncr(6, 3) << " ";
        // for(int i = ncrT.size();i <= n;i++){
        //     vector<long long> b;
        //     ncrT.push_back(b);
        //     for(int j = 0;j <= i;j++){
        //         if(j == 0 || j == i){
        //             ncrT[i].push_back(1);
        //         }
        //         else{
        //             long long x = ((ncrT[i-1][j-1] + ncrT[i-1][j]) % M);
        //             ncrT[i].push_back(x);
        //         }
        //     }
        // }
        
        long long ncr = 1, r = 0;
        vector<long long> ans;
        ans.push_back(ncr);
        for(;r < n;r++){
            // cout <<  r << " ";
            ncr = ncr * (n - r);
            ncr = ncr / (r + 1);
            ncr = ncr % M;
            ans.push_back(ncr % M);
        }

        // for(int i = 0;i <= n;i++){
        //     cout << ans[i] << " ";
        // }
        // cout << "\n";

        // cout << ncrT[5][3] << " ";
        for(int i = 1;i <= cnt;i++){
            // cout << solve(i, s[0], n)  << " " << solve(i - 1, '1' + '0' - s[0], n) << "\n";
            
            sm = sm + ans[i] % M;
            // sm = ((long long)sm + ncr(n, i)) %M;
            // sm = ( sm + solve(i, s[0], n) + solve(i - 1, '1' + '0' - s[0], n)) % M;
        }
        cout << sm + 1 << "\n";
    }
}
