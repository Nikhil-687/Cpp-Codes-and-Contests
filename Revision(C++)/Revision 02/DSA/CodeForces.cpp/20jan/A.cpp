#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n;
        cin >> n;
        int even = 0, odd = 0;
        for(int i = 0;i < n;i++){
            int x; 
            cin >> x;
            
            if(x%2){odd++;}
            else even++;
        }
        ans.push_back((even ? (odd + 1) : odd - 1));
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}