#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int maxa, maxb;
        int inda = 0, indb = 0;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0)
                maxa = x;
            else if (maxa < x)
            {
                maxa = x;
                inda = i;
            }
            a.push_back(x);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0)
                maxb = x;
            else if (maxb == x)
            {
                count++;
            }
            else if (maxb < x)
            {
                maxb = x;
                indb = i;
            }
            a.push_back(x);
        }
        if (maxa < maxb && count >= 1)
        {

            ///// secondlargest ka b largest ho
            for (int i = 0; i < n; i++)
            {
                if (b[i] == maxb)
                {
                    if (a[i] == maxa)
                    {
                        int max, ind;
                        if (inda != 0)
                        {
                            max = a[0];
                            ind = 0;
                        }
                        else
                        {
                            max = a[1];
                            ind = 1;
                        }
                        for (int i = 0; i < n; i++)
                        {
                            if (i != inda)
                            {
                                if (max < a[i])
                                {
                                    max = a[i];
                                    ind = i;
                                }
                            }
                        }
                        if (b[ind] == maxb)
                            cout << "No\n";
                        else
                            cout << "Yes\n";
                        goto Y;
                    }
                }
            }
            cout << "Yes\n";
            goto Y;
        }
        else if (maxa == maxb)
        {
            if (inda != indb)
            {
                cout << "No\n";
            }
            else
                cout << "Yes\n";
        }
        else
        {
            cout << "Yes\n";
        }

    Y:;
    }
}
