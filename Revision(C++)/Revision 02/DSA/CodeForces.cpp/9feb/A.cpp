#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        cin >> s;
        string str = "";
        for(int i = 0;i < s.size()-2;i++){
            str+= s[i];
        }
        str+='i';
        str+='\n';
        ans.push_back(str);
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] ;
    }
    return 0;
}