#include <bits/stdc++.h>
using namespace std;
 
// const int MOD = 1e9 + 7; 
 
// // Types
// #define int long long
// using ll  = long long;
// using ull = unsigned long long;
// using ld  = long double;
 
// // Containers
#define vi vector<int>
// #define vvi vector<vector<int>>
// #define pii pair<int, int>
// #define vpii vector<pair<int, int>>
// #define mii map<int, int>
// #define msi map<string, int>
// #define msii map<int, string>
// #define umii unordered_map<int, int>
// #define usi unordered_set<int>
 
// // Shortcuts
// #define pb      push_back
// #define all(x)  begin(x), end(x)
// #define rall(x) rbegin(x), rend(x)
// #define sz(x)   (int)((x).size())
// #define endl '\n' 
 
// // ------------------------- Utility Functions ------------------------- //
 
 
 
// // GCD (Greatest Common Divisor)
// ll gcd(ll a, ll b) {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }
 
// // HCF (Same as GCD, for readability)
// ll hcf(ll a, ll b) {
//     if (b == 0)
//         return a;
//     else
//         return hcf(b, a % b);
// }
 
// // LCM (Least Common Multiple)
// ll lcm(ll a, ll b) {
//     ll g = gcd(a, b);
//     ll ans = (a / g) * b;
//     return ans;
// }
 
// // Fast Power (modular exponentiation)
// ll power(ll a, ll b, ll mod = MOD) {      // we can change value up there MOD 
//     ll res = 1;
//     while (b > 0) {
//         if (b % 2 == 1)
//             res = (res * a) % mod;
//         a = (a * a) % mod;
//         b = b / 2;
//     }
//     return res;
// }
 
// ll power_ll(ll a, ll b) {          // if we dont want to take the mod of result 
//     ll res = 1;
//     while (b > 0) {
//         if (b & 1) res *= a;
//         a *= a;
//         b >>= 1;
//     }
//     return res;
// }
// ll isqrt(ll n) { // to get square root precisely
//     ll x = sqrtl((long double)n);
//     while ((x + 1) * (x + 1) <= n) x++;
//     while (x * x > n) x--;
//     return x;
// }
 
// // Check if a number is prime
// bool isPrime(ll n) {
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
    
//     for (ll i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }
 
// // nCr (Combination n choose r) using Fermat’s Little Theorem (for large n under mod)
// ll nCr_mod(ll n, ll r, ll mod = MOD) {
//     if (r > n)
//         return 0;
 
//     vector<ll> fact(n + 1, 1);
//     for (ll i = 2; i <= n; i++)
//         fact[i] = (fact[i - 1] * i) % mod;
 
//     ll numerator = fact[n];
//     ll denominator = (fact[r] * fact[n - r]) % mod;
 
//     ll result = (numerator * power(denominator, mod - 2, mod)) % mod;
//     return result;
// }
 
// // Simple nCr (without mod, for small numbers)
// ll nCr_simple(ll n, ll r) {
//     if (r > n)
//         return 0;
//     if (r == 0 || r == n)
//         return 1;
 
//     r = min(r, n - r);
//     ll res = 1;
//     for (ll i = 1; i <= r; i++) {
//         res = res * (n - r + i);
//         res = res / i;
//     }
//     return res;
// }
// ll factorial(ll n){
//     if(n==0){
//         return 1;
//     }
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
 

int isPossible(int a, int b){
    if(a == b)return 0;
    if(a % (a-b) == b)return 1;
    return 0;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
        // cout << "hello\n";
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            // cout << a[i] << "\n";
        }
        sort(a.begin(), a.end());
        int j = 0;
        vector<int> b, c;
        for(int i = 0;i < n && j < n;i++){
            if(a[i] == j){j++;}
            else if(a[i] < j){
                c.push_back(a[i]);
            }
            else{
                b.push_back(j);
                j++;
                i--;
            }
        }
        if(b.size() == 0){
            cout << n << "\n";
        }
        else{
            for(int i = 0;i < b.size();i++){
                c.push_back(a[a.size()-1-i]);
            }
            sort(c.begin(), c.end());
            vector<int> vis(c.size(), 0);
            // for(int i = 0, j = 0;i < c.size() && j < b.size();i++){
            //     if(isPossible(b[i], c[j])){
            //         j++;
            //     }
            //     else if(b[i] == 0){
            //         j++;
            //     }
            //     else if(!isPossible(b[i], c[c.size()-1])){
            //         cout << b[i] << "\n";
            //         goto X;
            //     }
            // }
            for(int i = 0;i < b.size();i++){
                for(int j = 0;j < c.size();j++){
                    // cout << "hello: " << isPossible(7, 1) << "\n";
                    if(!vis[j] && (isPossible(c[j], b[i]) || b[i] == 0)){
                        vis[j]++;
                        goto Y;
                    }
                }
                // cout << i << " " << vis[0] << " " << vis[1] << " " << b[1] << " ";
                cout << b[i] << "\n";
                goto X;
                Y:;
            }
            cout << n << "\n";
            X:;
        }
        
    }
    
    return 0;
}