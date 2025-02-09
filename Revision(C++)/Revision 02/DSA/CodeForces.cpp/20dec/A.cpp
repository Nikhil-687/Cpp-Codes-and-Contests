#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int i = 0;
        while(i < n-1 && arr[i] == 0){
            i++;
        }
        while(i < n-1 && arr[i] != 0){
            i++;
        }
        while(i < n-1 && arr[i] == 0){
            i++;
        }
        
        



        X:;
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}