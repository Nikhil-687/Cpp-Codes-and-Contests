#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string x = "";
        string a, b, c = "";
        cin >> a >> b >> c;
        x+= a[0];
        x+= b[0];
        x+= c[0];
        ans.push_back(x);
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}