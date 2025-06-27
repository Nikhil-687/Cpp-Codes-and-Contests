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

bool isOk(vi a, int n){
    for(int i = 0;i < a.size();i++){
        if(a[i] != n){return 0;}
    }
    return 1;
}

int32_t main()
{

    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        int n, cnt = 0;
        cin >> n;
        vi a(3, 0);
        while(!isOk(a, n)){
            cnt++;
            sort(all(a));
            a[0] = min(a[1]*2+1,n);
        }
        ans.pb(to_string(cnt));
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}