#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        string a;
        cin >> a;
        int count = 0;
        int tempans = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == '0'){
                count++;
                if(count == m){
                    count = 0;
                    i = i+k-1;
                    tempans++;
                }
            }
            else{
                count = 0;
            }
        }
        ans.push_back(tempans);
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}