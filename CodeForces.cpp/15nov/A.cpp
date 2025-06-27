#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> a;
    while (t--)
    {
        int n;
        cin >> n;
        int prev;
        int ans = -1;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cin >> prev;
            }
            else if(z == 0 && i == n-1){
                int x;
                cin >> x;
                if(ans == -1){
                    if(prev == x){
                        ans = 0;
                    }
                    else {
                        ans = 1;
                    }
                }
            }
            else if (z == 0)
            {
                int x;
                cin >> x;
                if (prev != x)
                {
                    ans = n - i;
                    z = 1;
                }
            }
            else {int x;cin >> x;}
        }
        X:;
        if (n == 1)
            a.push_back(0);
        else
            a.push_back(ans);
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\n";
    }
}



// 5
// 5 4 3 2 1 0
// 6 5 5 5 5 5 5
// 6 6 5 5 5 5 5 
// 6 4 4 3 3 3 3
// 5 4 4 4 4 3