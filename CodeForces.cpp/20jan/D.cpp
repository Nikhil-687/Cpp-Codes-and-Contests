#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i = 0;i < n;i++){
            cin >> A[i];
        }
        for(int i = 1;i < n;i++){
            if(A[i-1] < A[i]){
                A[i] = A[i]- A[i-1];
                A[i-1] = 0;
            }
            else{
                ans.push_back(0);
                goto X;
            }
        }
        ans.push_back(1);
        X:;
    }
    for(int i = 0;i < ans.size();i++){
        cout << (ans[i] ? "YES" : "NO") << "\n";
    }
}