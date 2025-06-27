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
        int n;
        cin >> n;
        vi a(n);
        vi b(n);
        int count = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int min = INT_MAX;
        for(int i = 0;i < n;i++){
            cin >> b[i];
            if(b[i] > a[i])count++;
        }
        if(count > 1){
            ans.push_back("NO");
            goto end;
        }
        if(count == 0){
            ans.push_back("YES");
            goto end;
        }
        for(int i = 0;i < n;i++){
            if(a[i]-b[i] < min && a[i]-b[i] >= 0){
                min = a[i]-b[i];
            }
        }
        
        for(int i = 0;i < n;i++){
            if(b[i]-a[i] > min){
                ans.push_back("NO");
                goto end;
            }
        }
        ans.push_back("YES");
        end:;
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}


// 0 1
// 4 3