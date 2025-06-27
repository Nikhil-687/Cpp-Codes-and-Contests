#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<int> ans;
        for(int i = 0;i < n;i++){
            ans.push_back(1);
        }
        for(int i = 2;i <= n;i++){
            for(int j = i;j <= n;j = j + i){
                ans.at(j-1) *= i;
            }
        }
        for(int i = 0;i < n;i++){
            cout << ans.at(i) << " ";
        }
        cout << endl;

    }
    return 0;
}