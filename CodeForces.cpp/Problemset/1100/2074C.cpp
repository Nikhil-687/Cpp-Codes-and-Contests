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
        int s = 0;
        int x, y, z;
        cin >> x;
        int zero = 0, one = 0, two = 0; 
        while (x > 1)
        {
            if(x%2 == 0){
                if(zero == 1){one = 1;}
                two = 1;
            }
            else{
                zero = 1;
                if(two == 1){one = 1;}
            }
            s+= 1;
            x = x/2;
        }
        if(one){ans.pb(to_string((int)pow(2,s) -1));}
        else ans.pb("-1");
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}