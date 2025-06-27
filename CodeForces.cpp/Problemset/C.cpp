#include <bits/stdc++.h>
using namespace std;

bool isSquare(long long n)
{
    
    int i = 1;
    long long x = 1;
    while(n>=x){
        if(n == x)return 1;
        i++;
        x = i*i;
    }
    return 0;

}

int main()
{

    int t;
    cin >> t;
    vector<string> c;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        if (isSquare(sum))
        {
            c.push_back("YES\n");
        }
        else{
            c.push_back("NO\n");
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i];
    }
}