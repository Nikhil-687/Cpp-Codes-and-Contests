#include<bits/stdc++.h>

using namespace std;

bool allW(string s){
    for(int i = 0;i < s.size()/2;i++){
        if(s[i] == 'W'){}
        else return 0;
    }
    return 1;
}bool allR(string s){
    for(int i = 0;i < s.size()/2;i++){
        if(s[i] == 'R'){}
        else return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n == 1){if(s[0] == 'W'){cout << "Yes\n";goto X;}cout << "No\n";goto X;}
        if(allW(s)){if(n%2 == 0){cout << "Yes\n";goto X;}cout << "No\n";goto X;}
        if(allR(s)){cout << "Yes\n";goto X;}
        
        X:;
    }
    
}