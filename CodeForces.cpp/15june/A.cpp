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
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        if(k >= a || k >= b){
            int first = min(x, y), second = max(x, y);
            if(first == x){
            }
            else{
                swap(a, b);
            }
            int cnt = 0;
            cnt += (k-a)/first + 1;
            k -= first*cnt;
            // cout << "\n\n\n\n\n\n" << k << " " << b << " \n";
            if(k >= b){
                cnt += (k-b)/second + 1;
            }
            ans.pb(to_string(cnt));
        }
        else{
            ans.pb("0");
        }
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
