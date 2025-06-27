#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    vector<string> ans;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a;
        int left;
        string s = "";
        if (k == n)
        {
            s = "";
            for (int i = 0; i < m; i++)
            {
                int x;
                cin >> x;
                s += "1";
            }
            for (int i = 0; i < k; i++)
            {
                int x;
                cin >> x;
            }
            ans.push_back(s);
            goto X;
        }
        else if (k <= n - 2)
        {
            s = "";
            for (int i = 0; i < m; i++)
            {
                int x;
                cin >> x;
                s += "0";
            }
            for (int i = 0; i < k; i++)
            {
                int x;
                cin >> x;
            }
            ans.push_back(s);
            goto X;
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                int x;
                cin >> x;
                a.push_back(x);
            }
            for (int i = 0; i < k; i++)
            {
                int x;
                cin >> x;
                if (x == i + 2)
                {
                    left = i + 1;
                    goto Y;
                }
                left = n;
            }
        Y:;
            s = "";
            for (int i = 0; i < m; i++)
            {
                if (a[i] == left)
                {
                    s += '1';
                }
                else{
                    s += '0';
                }
            }
            ans.push_back(s);
        }

    X:;
    }
    // cout << "ok\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}