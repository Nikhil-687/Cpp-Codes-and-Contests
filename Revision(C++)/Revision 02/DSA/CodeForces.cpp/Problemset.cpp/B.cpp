#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    vector<int> c;
    while (t--)
    {
        int n;
        cin >> n;
        int ans;
        int count = 0;
        if(n == 1){c.push_back(0);goto X;}
        if(n%3 != 0){c.push_back(-1);goto X;}
        while(n%3 == 0){
            if(n%2 == 0){
                n = n/2;
            }
            else {
                count++;
            }
            count++;
            n = n/3;
        }
        if(n == 1){c.push_back(count);goto X;}
        c.push_back(-1);
        X:;
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << "\n";
    }
    vector<pair<int, int>> a;

}