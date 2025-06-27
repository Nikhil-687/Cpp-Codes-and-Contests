#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n, k; 
        cin >> n >> k;
        int count = 0;
        if(n == 1){ans.push_back(0);goto X;}
        while(n >= k){
            count++;
            n = n-k+1;
        }
        if(n == 1){ans.push_back(count);goto X;}
        ans.push_back(count+1);
        X:;
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}