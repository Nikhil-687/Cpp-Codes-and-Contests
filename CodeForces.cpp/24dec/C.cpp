#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> sizes;
    vector<vector<int>> ans;
    while (t--)
    {
        /* code */
        long n;
        cin >> n;
        unordered_map<int,int> H;
        vector<int> a;
        vector<int> b;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            a.push_back(x);
        }        
        for(int i = 0;i < n;i++){
            for(int j = i;j < n;j++){
                int sum = 0;
                for(int k = i;k < j;k++){
                    sum += a[k];
                }
                if(H[sum]){}
                else{
                    H[sum] = 1;
                    b.push_back(sum);
                }
            }
        }
        sizes.push_back(b.size());
        ans.push_back(b);
        cout << b.size() << "\n";
        
        cout << "\n";
    }
    for(int i = 0;i < sizes.size();i++){
        cout << sizes[i] << "\n";
        for(int j = 0;j < ans.size();j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}