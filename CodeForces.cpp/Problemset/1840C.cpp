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
    vector<int> ans;
    while(t--){
        int n, k, q;
        cin >> n >> k >> q;
        vi a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b;
        int count = 0, cnt = 0;
        for(int i = 0;i < n; i++){
            if(i == n-1){
                if(a[i] <= q){
                    cnt++;
                }
                b.pb(cnt);
            }
            else if(a[i] <= q){
                cnt++;
            }
            else{
                if(cnt >= k){b.pb(cnt);}
                cnt = 0;
            }
        }
        for(int i = 0;i < b.size();i++){
            // cout << "\nb[i]" << b[i] << " \n";
            for(int j = k;j <= b[i];j++){
                count += b[i] - j +1;
            }
        }
        ans.pb(count);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}