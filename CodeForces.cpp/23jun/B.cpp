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


void print(vector<int> a){
    for(int i = 0;i < a.size();i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

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
        vector<int> bmin, bmax, emin, emax;
        vector<int> bmini, bmaxi, emini, emaxi;
        int bmn = a[0], bmx = a[0], emn = a[n-1], emx = a[n-1];
        int bmni = 0, bmxi = 0, emni = n-1, emxi = n-1;
        for(int i = 0;i < a.size();i++){
            bmin.pb(bmn);
            bmax.pb(bmx);
            emin.pb(emn);
            emax.pb(emx);
            bmini.pb(bmni);
            bmaxi.pb(bmxi);
            emini.pb(emni);
            emaxi.pb(emxi);
            if(bmn >= a[i]){
                bmn = a[i];
                bmni = i;
            }
            if(bmx <= a[i]){
                bmx = a[i];
                bmxi = i;
            }
            if(a[n-i-1] >= emx){
                emx = a[n-1-i];
                emxi = n-1-i;
            }
            if(emn >= a[n-i-1]){
                emn = a[n-i-1];
                emni = n-1-i;
            }
        }

        // print(bmin);
        // print(bmax);
        // print(emin);
        // print(emax);
        // print(bmini);
        // print(bmaxi);
        // print(emini);
        // print(emaxi);
        int mn = n+1;
        for(int i = 0;i < n;i++){
            if(i != 0 && i != n-1){
                if(a[i] >= bmin[i]-1 && a[i] <= bmax[i]+1){
                    // print(a);
                    int nmx = min(bmaxi[i], bmini[i]);
                    // cout << a[i] << " " << nmx << "\n";
                    for(int j = i-1; j >= nmx;j--){
                        if(abs(a[j]-a[i]) <= 1){
                            mn = min(mn, i-j-1);
                            // cout << i <<  " "  << j << "\n";
                        }
                    }
                }
                if(a[i] >= emin[n-1-i]-1 && a[i] <= emax[n-1-i]+1){
                    int nmn = max(emaxi[i], emini[i]);
                    for(int j = i+1; j <= nmn;j++){
                        if(abs(a[j]-a[i]) <= 1){
                            mn = min(mn, j-i-1);
                            // cout << i <<  " "  << j << "\n";
                        }
                    }
                    // mn = min(mn, min(emaxi, emini));
                }
            }
        }
        if(mn == n+1){cout << "-1\n";}
        else{
            cout << mn << "\n";
        }


    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}