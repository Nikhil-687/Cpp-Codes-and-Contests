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

int max3(int a, int b){
    return a > b ? a : b;
}

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
        int max = 0, min = 0, sum = 0, max2 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] >= a[max]){max2 = max;max = i;}
            else if(a[i] >= a[max2]){max2 = i;}
            if(a[i] < a[min]){min = i;}
            sum+= a[i];
        }
        if(max == 0){max2 = 1;
            for(int i = 1; i < n; i++)
            {
                if(a[i] >= a[max]){max2 = max;max = i;}
                else if(a[i] >= a[max2]){max2 = i;}
                if(a[i] < a[min]){min = i;}
            }
            // cout << a[max] << " " << a[max2] << " " << max2 << "\n";
        }
        if(max3(a[max]-1, a[max2])-a[min] > k){ans.pb("Jerry");goto end;}
        if(sum%2 == 0){ans.pb("Jerry");goto end;}
        ans.pb("Tom");
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}