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
        int n, k;
        cin >> n >> k;
        vi a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == a[0] && cnt1 < k){
                cnt1++;
            }
            else if(cnt1 >= k && a[i] == a[a.size()-1]){cnt2++;}
        }
        if(a[0] == a[a.size()-1]){
            if(cnt1 + cnt2 >= k){ans.pb("YES");goto X;}
            
        }
        else{
            if(cnt2 >= k){ans.pb("YES");goto X;}
        }
        ans.pb("NO");
        X:;
        
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}