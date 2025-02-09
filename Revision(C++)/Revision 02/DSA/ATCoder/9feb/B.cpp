#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // vector<int> a(n);
    int x;
    long long sum = 0;
    int odd = 0;
    int even = 0;
    for(int i = 0;i < n;i++){
        cin >> x;
        if(x%2 == 0)even++;
        else odd++;
        // cout << x << "\n";
        sum += x;
    }

    if(n == 1){
        cout << "Fennec";
        return 0;
    }
    else if(n == 2){
        cout << "Snuke";
        return 0;
    }
    if(even > odd){
        cout << "Fennec";
        return 0;
    }

    else if(sum%2 == 0){
        cout << "Fennec";
    }
    else cout << "Snuke";
    return 0;
}