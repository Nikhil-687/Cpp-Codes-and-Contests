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
        int w, h, a, b;
        cin >> w >> h >> a >> b;
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(((x1 + a > x2 && x2 + a > x1 + a)) && ((y1 + b > y2 && y2 + b > y1+b)) || ((x2 + a > x1 && x2 + a > x1 + a) && (y2 + b > y1 && y2 + b > y1+b))){            
            ans.pb("NO3");
            continue;
        }
        if(x1 == x2 && y1 == y2){        
            ans.pb("NO1");
            continue;
        }
        int x3 = max(x1, x2);
        int x4 = min(x1 + a, x2 + a);
        int y3 = max(y1, y2);
        int y4 = min(y1 + b, y2 + b);
        if(((x3-x4) % a == 0 || x3-x4 <= 0 || x3-x4 >= w) && ((y3-y4) % b == 0 || y3-y4 <= 0 || y3-y4 >= h)){
            ans.pb("YES");
        }
        else{
            ans.pb("NO2");
        }
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}