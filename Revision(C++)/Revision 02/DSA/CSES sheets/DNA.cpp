#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 1, max = 1;
    for(int i = 1;i < s.size();i++){
        if(s[i] == s[i-1]){
            count++;
            if(max < count){max = count;
            // cout << "HI\n";}
            }}
        else{
            // cout << s[i];
            count = 1;
        }
    }
    cout << max ;
}