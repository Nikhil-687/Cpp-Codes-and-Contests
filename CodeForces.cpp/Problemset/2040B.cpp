#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n;
        cin >> n;
        int sol = 1;
        if(n <= 2){ans.push_back(n);}
        else{
            int count = 1;
            while(sol < n){
                count++;
                sol = sol*2 + 2;
            }
            ans.push_back(count);
        }
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}