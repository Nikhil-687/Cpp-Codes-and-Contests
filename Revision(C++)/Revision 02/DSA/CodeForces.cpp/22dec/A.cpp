#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            b.push_back(x);
        }

        sort_heap(a.begin(),a.end());
        sort_heap(b.begin(),b.end());


        int max = a.at(a.size()-1);
        int suma = max, sumb = 0;

        for(int i = 0;i < n-1;i++){
            suma += a.at(n-2-i);
            sumb += b[i];
            if(suma-sumb > max){max = suma-sumb;}
        }

        ans.push_back(max);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        /* code */
        cout << ans[i] << "\n";
    }


}