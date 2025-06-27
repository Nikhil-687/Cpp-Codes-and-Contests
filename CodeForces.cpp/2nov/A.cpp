#include <bits/stdc++.h>
using namespace std;

bool isSame(string a, string b)
{
    if (a.size() != b.size())
    {
        return 0;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
        }
        else
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    cin >> s;
    int n;
    char ch = s[s.size() - 1];
    cin >> n;
    vector<string> a;
    vector<string> b;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
        if (ch == s[0])
        {
            b.push_back(s);
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        string s = b[i];
        char ch = s[s.size() - 1];
        for (int j = 0; j < a.size(); j++)
        {
            char ch2 = a[j][0];
            if (ch == ch2)
            {
                if (isSame(s, a[j]))
                {
                }
                else
                    goto X;
            }
        }
        cout << s << "!";
        goto Y;
    X:;
    }
    if (b.size() == 0)
    {
        cout << "?";
    }
    else
        cout << b[0];
Y:;
}