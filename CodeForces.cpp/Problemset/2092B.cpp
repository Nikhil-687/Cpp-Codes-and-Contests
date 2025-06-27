#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    vector<int> c1, c2;
    while(t--){
        int n, m;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int count1 = 0, count2 = 0;
        for(int i = 0;i < n;i++){
            if(i%2){
                count1 += a[i]-'0';
                count2 += b[i]-'0';
            }
            else{
                count1 += b[i]-'0';
                count2 += a[i]-'0';
            }
        }
        // c1.push_back(count1);
        // c2.push_back(count2);
        if(n%2 == 1){
            if(count1 > (n/2)+1 || count2 > (n/2)){ans.push_back("NO");}
            else {ans.push_back("YES");}
        }
        else if(count1 > (n/2) || count2 > (n/2)){ans.push_back("NO");}
        else {ans.push_back("YES");}
    }
    for(int i = 0;i < ans.size();i++){
        // cout << c1[i] << " " << c2[i] << " ";
        cout << ans[i] << "\n";
    }
}