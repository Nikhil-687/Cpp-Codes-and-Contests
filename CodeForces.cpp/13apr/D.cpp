#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s, p;
        cin >> p >> s;
        vector<int> changesp, changess;
        for(int i = 1;i < p.size();i++){
            if(p[i] != p[i-1])changesp.push_back(i);
        }
        for(int i = 1;i < s.size();i++){
            if(s[i] != s[i-1])changess.push_back(i);
        }
        if(changesp.size() != changess.size()){ans.push_back("NO");}
        else{
            int xp, xs;
            if(changesp.size()){
                xp = p.size() - changesp[changesp.size()-1];
                xs = s.size() - changess[changess.size()-1];
            }
            if(changesp.size() == 0){
                if(p.size() <= s.size() && 2*p.size() >= s.size()){ans.push_back("YES");}
                else{ans.push_back("NO");}
                goto X;}
            if(changesp[0]*2 >= changess[0] && changess[0] >= changesp[0]){}
            else{ans.push_back("NO");goto X;}
            for(int i = 1;i < changesp.size();i++){
                int xp = changesp[i] - changesp[i-1], xs = changess[i] - changess[i-1];
                if(xp*2 >= xs && xs >= xp){}
                else {ans.push_back("NO");goto X;}
            }
            if(xp*2 >= xs && xs >= xp){}
            else {ans.push_back("NO");goto X;}
            ans.push_back("YES");
            X:;
        }

    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}