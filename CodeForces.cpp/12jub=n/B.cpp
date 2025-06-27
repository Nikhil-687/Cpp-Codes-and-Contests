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
    while(t--){
        string s;
        int n;
        cin >> n;
        cout << 2*n-1 << endl;
        for(int i = 0; i < n-1; i++)
        {
            cout << i+1 << " 1 " << i+1 << "\n";
            cout << i+1 << " " << i+2 << " " << n << "\n";
        }
        cout << n << " 1 " << n << "\n";
    }
    return 0;
}