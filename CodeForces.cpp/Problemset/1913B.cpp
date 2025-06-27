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
        string s;
        cin >> s;
        int n = s.size();
        vi zero;
        vi one;
        int z = 0, o = 0;
        if(s.size() == 1){ans.pb(1);goto end;}
        // if(s.size() == 2){
        //     if(s[0] != s[1]){
        //         ans.pb(0);goto end;
        //     }
        //     else{
        //         ans.pb(2);goto end;
        //     }
        // }
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0'){z++;}
            if(s[i] == '1'){o++;}
            zero.pb(z);
            one.pb(o);   
        }
        // cout << "\n\n" << z << " " << o << " " << t << "\n";
        // for(int i = 0;i < s.size();i++){
        //     // cout << zero[i] << " " << one[i] << "\n";
        // }
        for(int i = 0;i < s.size();i++){
            if((zero[n-i-1] >= o-i && zero[n-i-1] <= o) && (one[n-i-1] >= z-i && one[n-i-1] <= z) && o+z-one[n-i-1]-zero[n-i-1] == i){
                ans.pb(i);
                goto end;
            }
        }
        ans.pb(s.size());
        
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}