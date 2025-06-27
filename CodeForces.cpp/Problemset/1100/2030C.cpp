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
        if(s[0] == '0' && s[s.size()-1] == '0'){
            // ans.pb("No");

            int zero = 0, one = (n%2) ? 0 : 1;
            for(int i = 0;i < n;i++){
                if(s[i] == '1'){
                    one++;
                }
                else{
                    zero++;
                }
                cout << zero << " " << one << " " << i << " " << s << "\n";
                if(zero < one){ans.pb("Yes");goto end;}
            }
            zero = 0, one = n%2 ? 0 : 1;
            for(int i = n-1;i >= 0;i--){
                if(s[i] == '1'){
                    one++;
                }
                else{
                    zero++;
                }
                if(zero < one){ans.pb("Yes");goto end;}
            }
            ans.pb("No");
        }
        else{
            ans.pb("Yes");
        }
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}