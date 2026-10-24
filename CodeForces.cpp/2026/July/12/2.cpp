#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    string s;
    cin >> s;
    int star = 0, h = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '*')star++;
        else h++;
    }
    cout << star - h << "\n";
}