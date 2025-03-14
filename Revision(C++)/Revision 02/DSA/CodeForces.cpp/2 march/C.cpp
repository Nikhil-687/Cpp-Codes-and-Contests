#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> s;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        int ans = 0;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            if(x >= k){ans++;}
            else a.push_back(x);
        }
        if(ans == n){s.push_back(ans-1);goto Y;}
        sort(a.begin(), a.end());
        while(a.size() > 1){
            int i = 0;
            while(i >= 0 && i < a.size() && a[i]  + a[a.size()-1] < k && i < a.size()-1){
                i++;
            }
            if(i == 0){
                if(a.size()>2){
                    ans++;
                    a.erase(a.begin() + a.size()-1);
                    a.erase(a.begin() + a.size()-1);
                }
                else {goto X;}
            }
            else{
                i--;
                if(a.size() > 3){
                    ans++;
                    a.erase(a.begin() + i);
                    a.erase(a.begin() + a.size()-1);
                    a.erase(a.begin() + a.size()-1);
                }
                else{
                    goto X;
                }
            }
        }
        X:;s.push_back(ans);Y:;
    }
    for(int i = 0;i < s.size();i++){
        cout << s[i] << "\n";
    }
    return 0;
}