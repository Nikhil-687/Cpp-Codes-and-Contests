#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int a, b, d, e;
        cin >> a >> b >> d >> e;
        if((a+2*b == d && a+b+d == e) || (b+e == 2*d && a+b+d == e)){ans.push_back(3);}
        else if((a+2*b == d || a+b+d == e) || (b+e == 2*d)){ans.push_back(2);}
        else{ans.push_back(1);}
    }
    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << "\n";
    }
}