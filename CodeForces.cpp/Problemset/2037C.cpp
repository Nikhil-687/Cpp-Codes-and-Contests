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
        string s;
        int n;
        cin >> n;
        vi b(1, -1);
        vi a;
        if(n <= 4){ans.pb(b);goto end;}
        a.pb(1);
        a.pb(3);
        a.pb(5);
        a.pb(4);
        for(int i = 6;i <= n;i+= 2){
            a.pb(i);
        }
        a.pb(2);
        for(int i = 7;i <= n;i+= 2){
            a.pb(i);
        }
        ans.pb(a);
        // a.pb(1);
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j : ans[i]){cout << j << " ";}
        cout << endl;
    }
    return 0;
}