#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7; 
 
// Types
#define int long long
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
 
// Containers
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define msi map<string, int>
#define msii map<int, string>
#define umii unordered_map<int, int>
#define usi unordered_set<int>
 
// Shortcuts
#define pb      push_back
#define all(x)  begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x)   (int)((x).size())
#define endl '\n' 
 
// ------------------------- Utility Functions ------------------------- //
 
 
 
// GCD (Greatest Common Divisor)
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
 
// HCF (Same as GCD, for readability)
ll hcf(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}
 
// LCM (Least Common Multiple)
ll lcm(ll a, ll b) {
    ll g = gcd(a, b);
    ll ans = (a / g) * b;
    return ans;
}
 
// Fast Power (modular exponentiation)
ll power(ll a, ll b, ll mod = MOD) {      // we can change value up there MOD 
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b / 2;
    }
    return res;
}
 
ll power_ll(ll a, ll b) {          // if we dont want to take the mod of result 
    ll res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
ll isqrt(ll n) { // to get square root precisely
    ll x = sqrtl((long double)n);
    while ((x + 1) * (x + 1) <= n) x++;
    while (x * x > n) x--;
    return x;
}
 
// Check if a number is prime
bool isPrime(ll n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
 
// nCr (Combination n choose r) using Fermat’s Little Theorem (for large n under mod)
ll nCr_mod(ll n, ll r, ll mod = MOD) {
    if (r > n)
        return 0;
 
    vector<ll> fact(n + 1, 1);
    for (ll i = 2; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % mod;
 
    ll numerator = fact[n];
    ll denominator = (fact[r] * fact[n - r]) % mod;
 
    ll result = (numerator * power(denominator, mod - 2, mod)) % mod;
    return result;
}
 
// Simple nCr (without mod, for small numbers)
ll nCr_simple(ll n, ll r) {
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
 
    r = min(r, n - r);
    ll res = 1;
    for (ll i = 1; i <= r; i++) {
        res = res * (n - r + i);
        res = res / i;
    }
    return res;
}
ll factorial(ll n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
 

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        int h, w, k;
        cin >> h >> w >> k;
        vector<vector<int>> a(h, vector<int> (w));
        string x;
        for (int i = 0; i < h; i++) {
            cin >> x;
            for(int j = 0;j < w;j++){
                a[i][j] = x[j] - '0';
            }
        }

        for(int i = 0;i < w;i++){
            for(int j = 1;j < h;j++){
                a[j][i] = a[j-1][i] + a[j][i];
            }
        }
        for(int i = 0;i < h;i++){
            for(int j = 1;j < w;j++){
                a[i][j] = a[i][j-1] + a[i][j];
            }
        }

        int ans = 0;

        // for(int p = 0;p < h;p++){
        //     for(int q = 0;q < w;q++){
        //         for(int c = p;c < h;c++){
        //             for(int d = q;d < w;d++){
        //                 int z;
        //                 int e, f, g;
        //                 if(p == 0){
        //                     e = 0;
        //                 }
        //                 else{
        //                     e = a[p-1][d];
        //                 }
        //                 if(q == 0){
        //                     f = 0;
        //                 }
        //                 else{
        //                     f = a[c][q-1];
        //                 }
        //                 if(p == 0 || q == 0){
        //                     g = 0;
        //                 }
        //                 else{
        //                     g = a[p-1][q-1];
        //                 }
        //                 z = a[c][d] - e - f + g;
        //                 if(z == k){
        //                     // cout << p << " "  << q << " "  << c << " "  << d << " \n";
        //                     ans++;
        //                 }
        //             }
        //         }
        //     }
        // }


        for(int p = 0;p < h;p++){
            for(int c = p;c < h;c++){
                for(int q = 0, d = 0;q < w && d < w;){
                        int z;
                        int e, f, g;
                        if(p == 0){
                            e = 0;
                        }
                        else{
                            e = a[p-1][d];
                        }
                        if(q == 0){
                            f = 0;
                        }
                        else{
                            f = a[c][q-1];
                        }
                        if(p == 0 || q == 0){
                            g = 0;
                        }
                        else{
                            g = a[p-1][q-1];
                        }
                        z = a[c][d] - e - f + g;
                        if(z < k){
                            d++;
                        }
                        else if(z > k){
                            q++;
                        }
                        else{
                            int d2 = d+1;
                            int z2 = z;
                            int cnt = 1;
                            while(z2 == k){
                                int e, f, g;
                                if(p == 0){
                                    e = 0;
                                }
                                else{
                                    e = a[p-1][d];
                                }
                                if(q == 0){
                                    f = 0;
                                }
                                else{
                                    f = a[c][q-1];
                                }
                                if(p == 0 || q == 0){
                                    g = 0;
                                }
                                else{
                                    g = a[p-1][q-1];
                                }
                                z2 = a[c][d2] - e - f + g;
                                if(z2 == k){
                                    d2++;
                                    cnt++;
                                }
                                else {break;}
                            }
                            ans+= cnt;
                            q++;
                        }
                }
            }
        }


        cout << ans << "\n";
        
    }
    
    return 0;
}