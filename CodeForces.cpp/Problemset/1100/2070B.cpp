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
    vector<string> ans2;
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        string a;
        cin >> a;
        long long T = 0;
        long long ans = 0;
        if(x == 0){
            ans = k;goto Y;
        }
        for(int i = 0;i < n; i++)
        {
            if(a[i] == 'L')
            {
                x--;
            }
            else{
                x++;
            }
            if(x == 0){k -= i;goto X;}
        }
        goto Y;
        X:;

        x = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 'L')
            {
                x--;
            }
            else{
                x++;
            }
            if(x == 0){T = i;goto Z;}
        }
        ans = 1;
        goto Y;
        Z:;

        ans = 1 + (k-1)/(T+1);

        Y:;

        ans2.pb(to_string(ans));


    }
    for(int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << endl;
    }
    return 0;
}