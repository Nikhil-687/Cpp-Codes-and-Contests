#include <bits/stdc++.h>
using namespace std;

class Solution
{
    pair<int, int> solveBracket(string s, int index)
    {
        int count = 1;
        pair<int, int> ans;
        string s2 = "";
        for (int j = index + 1; j < s.size(); j++)
        {
            if (s[j] == '(')
                count++;
            else if (s[j] == ')')
                count--;
            if (count == 0)
            {
                ans.first = calculate(s2);
                ans.second = j;
                return ans;
            }
            s2 += s[j];
        }
        return ans;
    }

public:
    int calculate(string s)
    {
        int n = s.size();
        int result = 0;
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ' || s[i] == '(' || s[i] == ')')
            {
            }
            else
            {
                if (s[i] == '+')
                {
                    int j = i + 1;
                    k = 1;
                    while (s[j] < 48 || s[j] > 57)
                    {
                        if (s[j] == '-')
                            k *= -1;
                        j++;
                    }
                    int num = 0;
                    while (s[j] >= 48 && s[j] <= 57)
                    {
                        num = num * 10 - 48 + s[j];
                        j++;
                    }
                    result += k * num;
                    i = j-1;
                }
                if (s[i] == '-')
                {
                    int j = i + 1;
                    k = -1;
                    int num = 0;

                    while (s[j] < 48 || s[j] > 57)
                    {
                        if (s[j] == '-')
                            k *= -1;
                        if (s[j] == '(')
                        {
                            result += k * solveBracket(s, j).first;
                            i = solveBracket(s, j).second;
                            goto X;
                        }
                        j++;
                    }
                    while (s[j] >= 48 && s[j] <= 57)
                    {
                        num = num * 10 - 48 + s[j];
                        j++;
                    }
                    result += k * num;
                    i = j;
                X:;
                    if (s[j] == '-')
                        i--;
                }
                else if (s[i] > 48 && s[i] <= 57)
                {
                    int num = 0;
                    int j = i;
                    while (s[j] >= 48 && s[j] <= 57)
                    {
                        num = num * 10 - 48 + s[j];
                        j++;
                    }
                    result += num;
                    i = j - 1;
                }
            }
        }
        return result;
    }
};

int main()
{
    int t;
    
    {
        string s;
        cin >> s;
        Solution S;
        cout << S.calculate(s) << "\n";
    }
}