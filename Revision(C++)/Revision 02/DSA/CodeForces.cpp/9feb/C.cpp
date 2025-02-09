#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n, 0);
        long long b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> b;
        int z = 0;
        if (b - a[0] < a[0])
            a[0] = b - a[0];
        for (int i = 1; i < a.size(); i++)
        {
            if (z == 0)
            {
                if (b - a[i] <= a[i] && b - a[i] >= a[i - 1])
                {
                    a[i] = b - a[i];
                }
                if (a[i] < a[i - 1])
                {
                    z = 1;
                    if(b-a[i] >= a[i-1]){}
                    else ans.push_back("No\n");goto X;    
                }
            }
            else
            {
                if (b - a[i] >= a[i] && b - a[i] >= a[i - 1])
                {
                    a[i] = b - a[i];
                }
                if (a[i] < a[i - 1])
                {
                    ans.push_back("No\n");
                    goto X;
                }
            }
        }
        ans.push_back("Yes\n");
    X:;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}