#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> a;
    while (t--)
    {
        string n;
        cin >> n;
        if (n.size() >= 3)
        {
            string s = "";
            if (n[0] != n[1] && n[1] != n[2] && n[0] != n[2])
            {
                s += n[0];
                s += n[1];
                s += n[2];
                s += "\n";
            }
            else
            {
                for (int i = 1; i < n.size() - 1; i++)
                {
                    if (n[i - 1] != n[i] && n[i] != n[i + 1] && n[i - 1] != n[i + 1])
                    {
                        s += n[i - 1];
                        s += n[i];
                        s += n[i + 1];
                        s += "\n";
                        goto X;
                    }
                }
                for (int i = 1; i < n.size(); i++)
                {
                    if (n[i - 1] == n[i])
                    {
                        s += n[i - 1];
                        s += n[i];
                        s += "\n";
                        goto X;
                    }
                }
                if (n.size() == 3)
                {
                    s += "-1\n";
                    goto X;
                }
                else
                {
                    s += n[0];
                    s += n[1];
                    s += n[2];
                    s += n[3];
                    s += "\n";
                    goto X;
                }
            }
        X:;
            a.push_back(s);
        }
        else
        {
            string s = "-1\n";
            a.push_back(s);
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
}

/*

10
a
aaaa
aabb
aab
abababa
aba
aabb
aabcd
abbabb
abbaab


 */