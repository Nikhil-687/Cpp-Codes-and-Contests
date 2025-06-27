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
        vi a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vi dub, sing;
        sort(a.begin(), a.end());
        // cout << "a : ";
        for(int i = 0;i < n-1;i++){
            if(a[i] == a[i+1]){
                dub.pb(a[i]);
                i++;
                if(i == n-2){
                    sing.pb(a[i+1]);
                }
            }
            else{
                sing.pb(a[i]);
                if(i == n-2){
                    sing.pb(a[i+1]);
                }
                // cout << a[i] << " ";
            }
        }
        // cout << "\n";
        if(dub.size() == 0){
            ans.pb("-1");goto end;
        }
        if(dub.size() >= 2){
            ans.pb(to_string(dub[0]) + " " + to_string(dub[0]) + " " + to_string(dub[1]) + " " + to_string(dub[1]));
            goto end;
        }
        // cout << "\n\n\nsing: ";
        // for(int i = 0;i < sing.size();i++){
        //     cout << sing[i] << " ";}
            for(int i = 1;i < sing.size();i++){
            if(abs(sing[i]-sing[i-1])/2 < dub[0]){
                ans.pb(to_string(dub[0]) + " " + to_string(dub[0]) + " " + to_string(sing[i]) + " " + to_string(sing[i-1]));
                goto end;
            }
        }
        // cout << "\n";
        ans.pb("-1");
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}