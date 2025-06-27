#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define fi first    
#define se second
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define msi map<string, int>
#define msii map<int, string>
#define umii unordered_map<int, int>
#define usi unordered_set<int>


int32_t main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        int n, m, k;
        cin >> n >> m >> k;
        // s+= m +'0';
        vi a(n);
        umii mp;
        for(int i = 0;i < m;i++){
            cin >> a[i];
        }
        for(int i = 0;i < k;i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        if(n > k+1){
            for(int i = 0;i < m;i++){
                s+= "0";
            }
            ans.push_back(s);
            goto end;
        }
        if(n == k){
            for(int i = 0;i < m;i++){
                s+= "1";
            }
            ans.push_back(s);
            goto end;
        }
        for(int i = 0;i < m;i++){
            if(mp[a[i]] > 0){
                s+= "0";
            }
            else{
                s+= "1";
            }
        }
        // cout << "\n\n\n" << a[3] << "\n\n\n\n\n";
        ans.push_back(s);
        end:;
    }
    for(auto i : ans){
        cout << i << endl;
    }
}