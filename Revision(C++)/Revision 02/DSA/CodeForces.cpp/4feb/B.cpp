#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= 3; i++)
        {

            for (int j = 2*i-1; j < a.size() + k + i; j++)
            {
                if (a[j] != i)
                {
                    ans.push_back(i);
                    goto X;
                }
            }
        }
        ans.push_back(a[a.size() - 1] + 1);
    X:;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}