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


// bool isBeautiful(vi a){
//     int z = 1;
//     // cout << "\n";
//     for(int i = 1;i < a.size();i++){
//         // cout << i << " " << a[i] << "\n";
//         if(a[i] < a[i-1]){
//             if(z == 0)return 0;
//             if(a[0] < a[a.size()-1]){return 0;}
//             z--;
//         }

//     }
//     // cout << "\n";
//     if(z == 1 || (a[0] >= a[a.size()-1]))return 1;
//     return 0;
// }

int32_t main()
{

    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        int n;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i]; 
        }
        int z = 1;
        s+= '1';
        int j = 1;
        for (int i = 1; i < a.size(); )
        {
            // cout << t << "  " << i << " ";
            int k = 1;
            // if(j <= 10)cout << i << " " << i-j << "\n";
            if(a[i] < a[i-j]){z--;k--;}
            if(z == 1 || (z == 0 && a[0] >= a[i])){
                s+= '1';
                i++;
            }
            else{
                s+='0';
                if(!k){z++;}
                // a.erase(a.begin()+i);
                i++;
                j++;
            }
            // cout << s << "\n";
        }
        ans.pb(s);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}