#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define pob pop_back
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
        int n;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vi prev;
        prev.pb(a[0]);
        int start = 1;
        int cnt = 1;
        unordered_map<int, int> mp;
        for(int i = 1;i < n;i++){
            unordered_map<int, int> H;
            for(int j = start;j <= i;j++){
                H[a[j]] = 1;
            }
            for(int j = 0;j < prev.size();j++){
                if(H[prev[j]] == 1){}
                else{goto X;}
            }
            for(int j = start;j <= i;j++){
                if(mp[a[j]] == 0){prev.pb(a[j]);mp[a[j]]++;}
            }
            cnt++;
            start = i+1;
            X:;
        }
        ans.pb(to_string(cnt));

    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}