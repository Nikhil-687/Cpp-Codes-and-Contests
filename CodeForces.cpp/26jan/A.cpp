#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        long long count = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '1'){count++;}
        }
        cout << count << "\n";
    }
} 