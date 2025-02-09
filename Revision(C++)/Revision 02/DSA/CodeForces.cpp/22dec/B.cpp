#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int direct = n/(a+b+c);
        int rem = n%(a+b+c);

        direct *= 3;
        
        if(rem == 0){cout << direct << "\n";}
        else{
            rem -= a;
            if(rem <= 0){cout << direct+1 << "\n";}
            else{
                rem -= b;
                if(rem <= 0){cout << direct+2 << "\n";}
                else {cout << direct+3 << "\n";}
            }
        }

    }}