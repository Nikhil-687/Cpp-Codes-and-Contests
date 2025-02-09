#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    if (n == m)
    {
        cout << 0 << " \n";
    }
    else
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
                count++;
        }
        cout << count << "\n";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
                cout << i << " ";
        }
    }
}