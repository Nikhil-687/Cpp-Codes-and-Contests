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
    vector<vi> ans;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == n){a[i] = 1;}
            else{a[i]++;}
        }
        ans.pb(a);

    }
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j: ans[i]){cout << j << " ";}
        cout << endl;
    }
    return 0;
}