#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        int i = 0;
        if(s.size() == 1){ans.push_back("-1");}
        else if(s.size() == 2){if(s[0] == s[1]){ans.push_back(s);}else{ans.push_back("-1");}}
        else{
            X:;
            if(i >= s.size()-2){ans.push_back("-1");goto Y;}
            string x = "";
            if(s[i+0] == s[i+1]){x+= s[i+0];x += s[i+0];ans.push_back(x);}
            else if(s[i+2] == s[i+1]){x+= s[i+2];x += s[i+1];ans.push_back(x);}
            else if(s[i] == s[i+2]){i++;goto X;}
            else{x+= s[i+0];x+= s[i+1];x += s[i+2];ans.push_back(x);}
        }
        Y:;
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}
