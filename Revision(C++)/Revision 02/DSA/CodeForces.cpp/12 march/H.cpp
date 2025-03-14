#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<vector<int>> a;
    while(t--){
        int n, k;
        vector<int> ans;
        cin >> n >> k;
        int j = 1;
        for(int i = 1;i <= 2*n;i++){
            if(i == k+1){
                ans.push_back(1);
            }
            else if(i <= k){ans.push_back(i);}
            else if(i <= n+1){ans.push_back(i-1);}
            else{
                ans.push_back(i-n);
            }
        }
        a.push_back(ans);
    }
    for(int i = 0;i < a.size();i++){
        for(int j = 0;j < a[i].size();j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}