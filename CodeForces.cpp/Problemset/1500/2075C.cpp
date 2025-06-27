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


int search(vector<int> a, int x)
{
    int l = 0, r = a.size() - 1;
    if(x > a[a.size()-1]){return -1;}
    int mid = (l + r) / 2;
    while(l <= r)
    {
        mid = (l+r)/2;
        if(a[mid] == x)
            return mid;
        else if(a[mid] < x && (mid != a.size()-1 && a[mid + 1] > x))
            return mid + 1;
        else if(a[mid] > x && (mid != 0 && a[mid - 1] < x))
            return mid;
        else if(a[mid] < x)
            l = mid + 1;
        else
            r = mid-1;
    }
    return mid; 
}

int32_t main()
{

    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        int n, m;
        cin >> n >> m;
        vi a(m);
        for(int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int cnt = 0;
        for(int i = 0; i < m; i++)
        {
            int ind = search(a, n-a[i]);
            if(ind == -1)continue;
            cout << a[i] << " " << ind << " ";

            ind = max(i+1, ind);
            for(int j = ind; j < m; j++)
            {
                if(a[i] + a[j] - n >= n){
                    cnt+= min(n-1, min(a[i], a[j]));
                }
                else if(a[i] + a[j] >= n){
                    cnt += min(a[i]+a[j]+1-n, min(a[i], a[j]));
                }
            }
            cout << a[i] << " " << ind << "\n";
        }
        cout << cnt*2 << endl;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}