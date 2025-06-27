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
    vector<vvi> ans;
    while(t--){
        string s;
        int n, q;
        cin >> n >> q >> s;
        char x, y;
        int ba = 0, ca = 0, bc = 0, cb = 0;
        vi baa, caa, bca, cba;
        vvi stor;
        for(int i = 0;i < q;i++){
            cin >> x >> y;
            if(x == 'b'){
                if(y == 'c'){bc++;}
                else{ba++;}
            }
            else{
                if(y == 'b'){cb++;}
                else{ca++;}
            }
            stor.pb({x, y});
        }
        for(int i = 0;i < stor.size();i++){
            char x = stor[i][0], y = stor[i][1];
            if(x == 'b'){
                if(y == 'c'){bc--;}
                else{ba--;}
            }
            else{
                if(y == 'b'){cb--;}
                else{ca--;}
            }
        }

    }
    for(int i = 0; i < ans.size(); i++)
    {
        for(auto j: ans[i]){
            for(auto k: j){
                cout << k << " ";
            }
            for(auto k: j){
                cout << k << " ";
            }
            for(auto k: j){
                cout << k << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}