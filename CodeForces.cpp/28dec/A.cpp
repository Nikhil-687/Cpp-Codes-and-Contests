#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> ans;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a(n);
        int prev;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(i == 0){prev = a[i];}
            else{
                if(a[i]> prev){
                    if(a[i]<2*prev){
                        ans.push_back("YES\n");
                        for(int j = i+1;j < n;j++)cin >> a[j];
                        goto X;
                    }
                }
                else {
                    if(a[i]*2 > prev){                        
                        ans.push_back("YES\n");
                        for(int j = i+1;j < n;j++)cin >> a[j];
                        goto X;
                    }
                }
            }
            prev = a[i];
        }
        ans.push_back("NO\n");
        X:;
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i];
    }
}