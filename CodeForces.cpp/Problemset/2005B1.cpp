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
        int n, m , q;
        cin >> n >> m >> q;
        vi a(m);
        vi b(q);
        int min = 0, max = 0;
        for(int i = 0;i < m; i++){
            cin >> a[i];
            if(i == 0)
            {
                min = a[i];
            }
            else if(min > a[i])
            {
                min = a[i];
            }
            if(max < a[i])
            {
                max = a[i];
            }
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < q; i++)
        {
            cin >> b[i];
            if(b[i] < min || b[i] > max)
            {
                // ans.pb();
                if(b[i] < min){ans.pb(to_string(min-1));}
                else{ans.pb(to_string(n-max));}
                // cout << min << " ";
                continue;
            }
            int min = abs((b[1] - a[0])/2);
            
            int j;


            int l = 0;
            int h = a.size()-1;
            int m = (l+h)/2;
            while(l <= h){
                m = (l+h)/2;
                if(a[m] < b[i] && m < a.size()-1 && a[m+1] > b[i]){
                    j = m+1;
                    goto X;
                }if(a[m] > b[i] && m > 0 && a[m-1] < b[i]){
                    j = m;
                    goto X;
                }
                if(a[m] < b[i]){l = m+1;}
                else{h = m-1;}
            }
            // return -1;


            X:;


            // ans.pb(to_string(j));
            if(a[j] > b[i] && a[j-1] < b[i])
                {
                    min = abs((a[j] - a[j-1])/2);
                }
                if(a[j] == b[i] || a[j-1] == b[i]){
                    min = 0;
                }

            // for(int j = 1; j < m; j++)
            // {
            //     if(a[j] > b[i] && a[j-1] < b[i])
            //     {
            //         min = abs((a[j] - a[j-1])/2);
            //     }
            //     if(a[j] == b[i] || a[j-1] == b[i]){
            //         min = 0;
            //     }
            // }
            ans.pb(to_string(min));
        } 

    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}