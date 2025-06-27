#include <bits/stdc++.h>
using namespace std;

int lcm(int n1, int n2)
{
    // int max, lcm;
    // max = (n1 > n2) ? n1 : n2;

    // lcm = max;

    // while ((lcm % n1 != 0) || (lcm % n2 != 0))
    // {
    //     lcm += max;
    // }

    int i, gcd, lcm;

    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    return lcm;
}

int main()
{
    int t;
    cin >> t;
    vector<int> a2;
    while (t--)
    {
        int a, b, c;
        cin >> c >> b;
        if (c < b)
        {
            a = c;
        }
        else
        {
            a = b;
            b = c;
        }
        for (int i = a; i <= lcm(a, b); i++)
        {
            if (i % a == i % b)
            {
                a2.push_back(i);
                goto X;
            }
        }
    X:;
    }
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a2[i] << "\n";
    }
}