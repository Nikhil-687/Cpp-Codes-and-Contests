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
        int n, r, l;
        cin >> n >> l >> r;
        vi a, b;
        int x;
        l--, r--;
        for(int i = 0; i < n; i++)
        {
            if(i <= r){
                cin >> x;
                a.pb(x);
                if(i >= l){
                    b.pb(a[i]);
                }
            }
            else{cin >> x; b.pb(x);}
        }
        int sum1 = 0, sum2 = 0, sum = 0;
        sort(all(a));
        sort(all(b));
        // cout << "\n\n\na: ";
        for(int i = 0;i < r-l+1;i++){
            // cout << a[i] << " ";
            sum1+= b[i];
        }
        // cout << "\nb: ";
        for(int i = 0;i < r-l+1;i++){
            // cout << b[i] << " ";
            sum2+= a[i];
        }
        // cout << "\nsum1: " << sum1 << " sum2: " << sum2 << endl;
        ans.pb(to_string(min(sum1, sum2)));
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}