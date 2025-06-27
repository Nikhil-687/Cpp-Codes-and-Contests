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
        int n, k;
        cin >> n >> k;
        vi a(n);
        int z = 0;
        int cnt2 = 0, cnt1 = 0;
        int ans1 = 0;
        int ans2 = 0;
        int ans3 = 0;
        int ans4 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            
                // goto end;
        }
        for(int i = 0; i < n; i++){
            cnt1++;  
            if(a[i]%2 == 0)
            {
                cnt2++;
            }
            if((a[i]+1)%k == 0)
            {
                ans1 = 1;
            }
            if((a[i]+2)%k == 0)
            {
                ans2 = 1;
                // ans.pb("Hi "+to_string(a[i]));
            }
            if((a[i]+3)%k == 0)
            {
                ans3 = 1;
            }
            if((a[i]+4)%k == 0)
            {
                ans4 = 1;
            }
            if(a[i]%k == 0 && z == 0)
            {
                ans.pb("0");
                goto end;
            }
        }
            if(k == 4 && cnt2 >= 2){ans.pb("0"); z = 1; goto end;}
            if(ans1 == 1){ans.pb("1"); z = 1; goto end;}
            else if(k == 4 && cnt1 >= 1 && cnt2 >=1){ans.pb("1");goto end;}
            if(ans2 == 1){ans.pb("2"); z = 1; goto end;}
            else if(k == 4 && (cnt1 >= 2 || cnt2 >= 1)){ans.pb("2"); z = 1; goto end;}
            if(ans3 == 1){ans.pb("3"); z = 1; goto end;}
            if(ans4 == 1){ans.pb("4"); z = 1; goto end;}
            else if(k == 4 && cnt1 >= 1){ans.pb("4"); z = 1; goto end;}
            
            end:;
        }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}