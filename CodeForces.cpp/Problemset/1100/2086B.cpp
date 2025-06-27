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
        int n, k, x;
        cin >> n >> k >> x;
        vi a(n);
        vi sum;
        int sm = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = n-1; i >= 0; i--){
            sm += a[i];
            sum.pb(sm);
        }
        int cnt = 0;
        if(k*sm < x){ans.pb("0");goto end;}
        for(int i = k-1;i >= 0;i--){
            int summ = i*sm;
            if(summ >= x){cnt += n;}
            else if(summ+sm >= x){
                for(int j = 0; j < n;j++){
                    if(summ+sum[j] >= x){
                        cnt+= n-j;
                        goto X;
                    }
                }
                X:;
            }
        }
        ans.push_back(to_string(cnt));
        end:;

    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}