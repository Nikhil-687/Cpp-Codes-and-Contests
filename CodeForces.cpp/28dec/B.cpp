#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        int H[400001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            if (a[i] == b[i])
            {
                H[a[i]]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = a[i]; j <= b[i]; j++)
            {
                if (H[j] == 0)
                {
                    cout << '1';
                    goto X;
                }
            }
            if (a[i] != b[i] || H[a[i]] > 1)
                cout << '0';
            else cout << '1';
        X:;    
        }
        cout << '\n';
    }
}