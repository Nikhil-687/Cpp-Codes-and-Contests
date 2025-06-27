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


bool in(int x, int y, int n, int m){
    return x >= 0 && y >= 0 && x < n && y < m;
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int32_t main()
{

    int t;
    cin >> t;
    vector<vvi> ans;
    while(t--){
        string s;
        int n, m;
        cin >> n >> m;
        vi b(m);
        vvi a(n, b);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0;j < m;j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0;j < m;j++){
                int mx = 0;
                for(int k = 0;k < 4;k++){
                    int ix = i+dx[k];
                    int iy = j+dy[k];
                    if(in(ix, iy, n, m)){mx = max(mx, a[ix][iy]);}
                }
                int z = mx;
                a[i][j] = min(a[i][j], z);
                // cout << a[i][j] << " ";
            }
            // cout << "\n";
        }

        ans.pb(a);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        for(auto j: ans[i]){
            for(auto k: j){
                cout << k << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}