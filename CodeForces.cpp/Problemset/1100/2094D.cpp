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
        string p, s;
        cin >> p >> s;
        int cnt = 1;
        vi cntp, cnts;
        if(s[0] != p[0]){ans.pb("NO");goto end;}
        for(int i = 1; i < p.size(); i++){
            if(p[i] == p[i-1]){cnt++;if(i == p.size()-1){cntp.pb(cnt);}}
            else{
                cntp.pb(cnt);
                cnt = 1;
                if(i == p.size()-1){cntp.pb(cnt);}
            }
        }
        if(p.size() == 1){cntp.pb(1);}
        if(s.size() == 1){cnts.pb(1);}
        cnt = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){cnt++;if(i == s.size()-1){cnts.pb(cnt);}}
            else{
                cnts.pb(cnt);
                cnt = 1;
                if(i == s.size()-1){cnts.pb(cnt);}
            }
        }
        if(cnts.size() != cntp.size()){ans.pb("NO");goto end;}

        for(int i = 0;i < cntp.size();i++){
            if(cntp[i] <= cnts[i] && cntp[i]*2 >= cnts[i]){}
            else{ans.pb("NO");goto end;}
        }
        ans.pb("YES");
        // cout << "\n";
        // for(int i = 0;i < cnts.size();i++){
        //     cout << cnts[i] <<  " ";
        // }
        // cout << "\n";
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}