#include <bits/stdc++.h>
using namespace std;

int dist(vector<int> a)
{
    unordered_map<int, int> H;
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (H[a[i]])
        {
        }
        else
        {
            count++;
            if (count >= 3)
                return 3;
            H[a[i]] = 1;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int sum = dist(a) + dist(b);
        if (sum > 3)
        {
            ans.push_back("YES\n");
        }
        else
        {
            ans.push_back("NO\n");
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}