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
        int cnt = 0;
        for(int i = 1;i < n;i++){
            if(s[i] != s[i-1]){cnt++;}
        }
        if(cnt >= 3){cnt=cnt-2+s[0]-'0';}
        else if(cnt == 2){cnt--;}
        else if(cnt == 1){}
        else if(cnt == 0 && s[0] == '1'){cnt += 1;}
        ans.pb(to_string(n+cnt));
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}