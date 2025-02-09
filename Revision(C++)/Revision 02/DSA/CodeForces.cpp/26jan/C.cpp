#include<bits/stdc++.h>
using namespace std;


long long max(long long a, long long b){return a > b ? a : b;}
long long abs(long long a){return a > 0 ? a : a*(-1);}
// int max(int a, int b){return a > b ? a : b;}


int main() {
    int t;
    cin >> t;
    vector<long long> ans;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            sum += a[i];
        }
        sum = max(sum, abs(a[n-1] - a[0]));
        for(int i = 1;i < a.size()-1; i++){
            sum = max(sum, 2*a[i]-a[0]-a[n-1]); 
        }
        // cout << sum << "\n";

        if(n == 1){
            ans.push_back(a[0]);
        }
        else ans.push_back(sum);
    }
    for(int i = 0;i < ans.size();i++){cout << ans[i] << "\n";}
    }