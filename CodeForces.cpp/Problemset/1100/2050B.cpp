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
        vi a, b;
        int x;
        int sum1 = 0, sum2 = 0, sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(i%2){
                a.pb(x);sum1+= x;}
            else{
                b.pb(x);sum2+= x;}
        }
        if(sum1 % a.size() != 0 || sum2 % b.size() != 0)
        {
            ans.pb("NO");
            continue;
        }
        if(sum1 / a.size() != sum2 / b.size())
        {
            ans.pb("NO");
            continue;
        }
        ans.pb("YES");
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}