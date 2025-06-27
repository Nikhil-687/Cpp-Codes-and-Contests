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
        cin >> s;
        int bob = 0;
                for(int i = 0;i < n;i++){
                    if(s[i] == 'B'){bob++;}
                }
                if(bob == 0){ans.pb("Alice");
                }
                if(bob == n){ans.pb("Bob");}
        if(n == 2){
            if(s == "AB"){
                ans.pb("Alice");
            }
            else{
                ans.pb("Bob");
            }
        }
        else{
            if(s[n-1] == 'A' && (s[0] == 'A' || s[n-2] == 'A')){ans.pb("Alice");}
            else{
                
                if(bob <= 1){ans.pb("Alice");}
                else{ans.pb("Bob");}
            }
        }
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}