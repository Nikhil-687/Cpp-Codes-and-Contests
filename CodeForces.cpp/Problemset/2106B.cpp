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

int max2(vi a, int target){
    int mx = INT_MIN, mi = INT_MAX;
    for(int i = 0;i < a.size();i++){
        mx = max(mx, a[i]);
        mi = min(mi, a[i]);
    }
    // cout << "\n\n\n\n\n" << mx << " " << mi << " " << target << "\n\n\n\n" << endl;
    return mi+target-mx+1;
}
int max(int a, int b){
    return a > b ? a : b;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    vi ans;
    while(t--){
        int n, k;
        cin >> n >> k;
        vi a(n);
        vi b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int target = -1;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(b[i] != -1){
                target = a[i]+b[i];
            }
        }
        if(target == -1){
            ans.pb(max(0, max2(a, k)));
            goto end;
        }
        for(int i = 0;i < n;i++){
            if(b[i] != -1){
                if(a[i]+b[i] != target){
                    ans.pb(0);
                    goto end;
                }
            }
            else{
                b[i] = target-a[i];
                if(0 <= b[i] && k >= b[i]){}
                else{
                    ans.pb(0);
                    goto end;
                }
            }
        }
        ans.pb(1);
        end:;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    
    return 0;
}