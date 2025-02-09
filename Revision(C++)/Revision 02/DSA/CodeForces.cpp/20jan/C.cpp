#include <bits/stdc++.h>
using namespace std;

int toooooSum(vector<int> input, int target, int n)
{
    vector<int> H(n, 0);
    for (int i = 0; i < input.size(); i++)
    {
        H[input[i]]++;
    }
    int ans = 0;
    for (int i = 1; i < H.size() && i < target; i++)
    {
        if (i == target - i)
        {
            ans += (H[i]%2) ? H[i]-1:H[i];
        }
        else ans += min(H[i], H[target - i]);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> input;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x >= k || x <= 0)
            {
            }
            else
                input.push_back(x);
            // if(input[i] >= k){useless.push_back(input[i]);}
        }
        int sol = toooooSum(input, k, n);

        ans.push_back(sol);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] / 2 << "\n";
    }
}