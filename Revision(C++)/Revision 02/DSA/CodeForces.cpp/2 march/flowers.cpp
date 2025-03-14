#include <bits/stdc++.h>

using namespace std;

int abs(int a){return a > 0 ? a : (-1)*a;}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int s = 0;
    vector<int> sum;
    for(int i = 0;i < n;i++){
        s += abs(a[i]);
        sum.push_back(s);
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
//        compute the answer
        long long ans = 0;
        if(l != r)
        {
            if(l > 1)ans = sum[r-1] - sum[l-2];
            else {ans = sum[r-1];}
            if(a[l] < 0){}
            else ans -= 2*a[l];
        }
        else ans = a[l-1];
        // ans-= a[r-1];
        cout << ans << "\n";
    }
}