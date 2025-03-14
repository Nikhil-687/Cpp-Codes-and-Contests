#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for(int i = 0;i < n;i++){cin >> a[i];sum += a[i];}
        ans.push_back(sum-n + 1);
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}