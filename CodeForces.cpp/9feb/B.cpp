#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        string s;
        cin >> s;
        bool a = 0;
        for(int i = 1;i < s.size();i++){
            if(s[i] == s[i-1])a = 1;
        }
        if(a == 1)ans.push_back(1);
        else ans.push_back(s.size());
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}