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


bool matched(string s, vi a){
    int n = s.size();
    unordered_map<int, int> m;
    for(int i = 0;i < n;i++){
      if(!m[s[i]]){
        for (int j = i+1; j < n; j++)
        {
          if(s[j] == s[i] && a[j] != a[i]){
            return false;
          }
          if(s[j] != s[i] && a[j] == a[i]){
            return false;
          }
        }
        m[s[i]]++;
      }
    }
    unordered_map<int, int> m2;
    for(int i = 0;i < n;i++){
      if(!m2[a[i]]){
        for (int j = i+1; j < n; j++)
        {
          if(s[j] != s[i] && a[j] == a[i]){
            return false;
          }
          if(s[j] == s[i] && a[j] != a[i]){
            return false;
          }
        }
        m2[a[i]]++;
      }
    }
    return true;
}

int32_t main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        for(int i = 0;i < m;i++){
          string s;
          cin >> s;
          if(s.size() != a.size()){
            ans.pb("NO");
            goto end;
          }
          if(matched(s, a)){
            ans.pb("YES");
          }
          else{
            ans.pb("NO");
          }
          end:;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}