#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> cnt = {1};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i = 1;i < n;i++){
            if(a[i] == a[i-1]){
                cnt[cnt.size()-1]++;
            }
            else{
                cnt.push_back(1);
            }
        }
        sort(cnt.begin(), cnt.end());
        int count = 0;
        int cn = k;
        for(int i = 0;i < cnt.size();i++){
            if(cn-cnt[i] >= 0){
                cn -= cnt[i];
            }
            else{
                count++;
            }
        }
        ans.push_back(max(1,count));
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}