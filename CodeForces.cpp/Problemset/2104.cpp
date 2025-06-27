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


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    vvi ans;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        vi b;
        vi maxDP(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int max = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] > max){
                max = a[i];
            }
            maxDP[i] = max;
        }
        for(int i = n-1;i >= 0;i--){
            b.pb(maxDP[i]+sum);
            sum+= a[i];
        }
        ans.pb(b);
    }
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}