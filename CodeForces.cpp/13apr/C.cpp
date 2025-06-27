#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<vector<int>> ans;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n,0);
        vector<vector<int>> a(n, b);
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin >> a[i][j];
            }
        }
        vector<int> H(2*n+1, 0);
        for(int i = 0;i < n;i++){
            if(i == 0){
                for(int j = 0;j < n;j++){
                    b.push_back(a[i][j]);
                    H[a[i][j]]++;
                }
            }
            else{
                b.push_back(a[i][a.size()-1]);
                H[a[i][a.size()-1]]++;
            }
        }
        vector<int> x;
        for(int i = 1;i <= 2*n;i++){
            if(H[i]==0){x.push_back(i);}
        }
        for(int i = n;i < b.size();i++){
            x.push_back(b[i]);
        }
        ans.push_back(x);
    }
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}