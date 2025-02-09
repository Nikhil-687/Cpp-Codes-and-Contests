#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    string s , t;
    cin >> n >> m >> s >> t;
    // char x2 = t[m-1];
    sort(t.begin(),t.end());
    for(int j = 0;j < m/2;j++){
        swap(t[j], t[t.size()-1-j]);
    }
    // cout << t << "\n";
    for(int i  = 0, j = 0;j < n && i < m;j++){47365S6[j] < t[i]){swap(s[j], t[i]);i++;}4 212B
    }swap(s[n-1], t[m-1]);
    cout << s << "\n";
}