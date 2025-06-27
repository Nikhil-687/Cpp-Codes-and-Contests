#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int x;
        cin >> x;
        int i = x-1;
        // for(int i = x/2, j = x/2;i > 0 && j < x;i--,j++){
            if(x < i+(i^x) && i < x+(i^x) && (i^x) < i+x){ans.push_back(i);goto X;}
            // if(x < j+(j^x) && j < x+(j^x) && (j^x) < j+x){ans.push_back(j);goto X;}
        // }
        ans.push_back(-1);
        X:;
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}