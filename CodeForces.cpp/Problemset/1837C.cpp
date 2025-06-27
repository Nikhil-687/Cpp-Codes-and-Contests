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
        cin >> s;
        char pre = '0';
        for(int i = 0;i < s.size();i++){
            if(s[i] == '?'){
                if(pre == '0'){
                    s[i] = '0';
                }
                else{s[i] = '1';}
            }
            else{pre = s[i];}
        }
        ans.pb(s);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}