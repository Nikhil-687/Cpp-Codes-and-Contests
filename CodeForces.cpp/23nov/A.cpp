#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<vector<int>> a;
    while(t--){
        int n;
        cin >> n;
        int i = 1;
        vector<int> b;
        while(i < 2*n){
            b.push_back(i);
            i += 2;
        }
        a.push_back(b);
    }
    for(int i = 0 ;i < a.size();i++){
        for(int j = 0;j < a[i].size();j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }


}