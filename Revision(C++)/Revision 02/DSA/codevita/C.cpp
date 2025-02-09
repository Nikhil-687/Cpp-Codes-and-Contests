#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s2;
    vector<pair<int, int>> s;
    for(int i = 0;i < n;i++){
        cin >> s2;
        pair<int, int> a;
        int ans;int j = 0;
        while(s2[j] != ':'){ans += ans*10 + s2[j]-48;j++;}
        a.first = ans;
        j = j+1;
        ans = 0;
        while(s2[j] != '\0'){ans += ans*10 + s2[j]-48;j++;}
        a.second = ans;
        s.push_back(a);
    }
    int i = 0;
    int x;
    while(i < x){
        if(s[i].second != 0){
            int n2;
            cin >> n2;
            for(int j = 0;j < s[i].second;j++){
                int a, b, c;
                cin >> a >> b >> c;
                
            }
        }
        i++;
    }
}