#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> a;
    while(t--){
        int n, m , k, count = 0, ans = 0;
        cin >> n >> m >> k;
        for(int i = 0;i < n;i++){
            char c;
            cin >> c;
            if(c == '0'){
                count++;
                if(count == m){
                    ans++;
                    int j = 0;
                    while(i < n && j < k-1){
                        i++;j++;
                        char c;
                        cin >> c;
                    }
                    count = 0;
                }
            }
            else {
                count = 0;
            }
        }
        X:;
        a.push_back(ans);
    }
    for(int i = 0;i < a.size();i++){
        cout << a[i] << "\n";
    }
}