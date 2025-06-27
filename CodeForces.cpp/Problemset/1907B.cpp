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
        cin >> s;
        // int small = -1, large = -1;
        vector<int> small, large;
        for(int i = 0;i < s.size();i++){
            if(s[i] == 'b'){
                if(small.size())small.pob();
            }
            else if(s[i] == 'B'){
                if(large.size())large.pob();
            }
            else if(s[i] >= 'a'){small.pb(i);}
            else if(s[i] <= 'Z'){large.pb(i);}
        }
        string s2 = "";
        // for(int i: small){
        //     cout << i << " ";
        // }
        // cout << endl;
        // for(int i: large){
        //     cout << i << " ";
        // }
        // cout << endl;
        int i = 0, j = 0;
        for( ;i < small.size() && j < large.size(); ){
            if(small[i] < large[j]){
                s2+= s[small[i]];
                i++;
            }
            else{
                s2+= s[large[j]];
                j++;
            }
        }for( ;i < small.size(); i++){
            s2+= s[small[i]];    
        }for( ;j < large.size(); j++){
            s2+= s[large[j]];    
        }
        ans.pb(s2);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}