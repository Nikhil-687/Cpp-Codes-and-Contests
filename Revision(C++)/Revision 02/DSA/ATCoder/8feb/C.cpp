#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n, 0), q(n, 0), a(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
        a[q[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 0; j < n; j++)
        // {
        //     if (q[j] == i + 1)
        //     {
        //         cout << q[p[j] - 1] << " ";
        //         goto X;
        //     }
        // }
        // X:;
        cout << q[p[a[i]] - 1] << " ";
        //  << p[a[q[i]]] << " " << a[q[i]] << q[i]
    }
}