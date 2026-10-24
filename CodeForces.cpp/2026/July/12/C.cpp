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
 

int cntPairsPos(int x){
    int ans = 0;
    if(x == 0)return 1;
    if(x == 1)return 1;
    
    return power(2, x-1) % MOD;
}

int cntPairsPosOdd(int x){
    int ans = 0;
    if(x == 0)return 0;
    if(x == 1)return 1;
    return power(2, x-1) % MOD;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        vi b, c, d;
        umii mp;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(!mp[a[i]] && a[i] != -1){
                b.push_back(a[i]);
            }
            mp[a[i]]++;
        }

        // d.resize(b.size());

        int ans = 1, even = 0, odd = 0;
        even = cntPairsPos(mp[-1]) % MOD;
        if(mp[-1] == 0){
            odd = 0;
        }
        else{
            odd = even;
        }
        
        // cout << mp[-1] << ' ' << even << "\n";

        n = b.size();
        // int z1 = 1;
        int z = 1;
        for(int i = 0;i < n;i++){
            z = z * cntPairsPos(mp[b[i]]) % MOD;
            // z2 = z2 * cntPairsPosOdd(mp[b[i]]) % MOD;
        }
        // for(int i = 0;i < n;i++){
        //     int x = cntPairsPos(mp[b[i]]) % MOD;
        //     // if(x != 0){
        //         z = z * x % MOD;
        //         // even = even * x % MOD;
        //     // }
        //     c.push_back(z);
        // }

        // cout << mp[-1] << ' ' << even << " " << z << " " << "\n";

        // z = 1;
        // for(int i = n-1; i >= 0; i--){
        //     int x = cntPairsPos(mp[b[i]]) % MOD;
        //     // if(x != 0){
        //         z = z * x % MOD;
        //     // }
        //     d[i] = z;
        // }

        // if(mp[-1]){
        //     odd = 0;
        //     for(int i = 0;i < n-1;i++){
        //         int z = cntPairsPos(mp[-1]) % MOD;
        //         if(b[i] == b[i+1] - 1){
        //             int x = (i+2 < n ? d[i+2] : 1);
        //             int y = (i > 0 ? c[i-1] : 1);
        //             z = z * x % MOD;
        //             z = z * y % MOD;
        //             z = z * cntPairsPos(mp[b[i]] - 1) % MOD;
        //             z = z * cntPairsPos(mp[b[i+1]] - 1) % MOD;
        //             odd = odd + z % MOD;
        //         }
        //         // cout << odd << " ";
        //     }
        //     // cout << "\n";
        // }
        // pairs i, i+1 
        int cnt = 0;
        for(int i = 1;i < n;i++){
            if(b[i] == b[i-1] + 1){
                cnt++;
                // cnt = cnt + mp[b[i]] * mp[b[i-1]] % MOD % MOD;
            }
        }
        odd = odd * cnt % MOD;
        odd = odd * z % MOD;
        even = even * z % MOD;
        // for(int i = 0;i < n;i++){
        //     cout << b[i] << " ";
        // }
        // cout << "\n";
        // for(int i = 0;i < n;i++){
        //     cout << c[i] << " ";
        // }
        // cout << "\n";
        // for(int i = 0;i < n;i++){
        //     cout << d[i] << " ";
        // }
        // cout << "\n";
        // cout << mp[-1] << " " << cntPairsPos(mp[-1]) << ", ";

        // cout << even << " " << odd << "\n";
        cout <<( (odd + even) % MOD )<< "\n";
        
    }
    
    return 0;
}

// 1
// 100
// -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 1 1 1 1 1 1 2 2 2 2 3 3 4 4 4 4 4 5 5 6 6 6 6 7 7 7 7 8 8 8 8 8 8 9 9 9 9 9 9 9 9 10 10 10 10 10 10 10 10 10 10 11 11 11 11 11 11 12 12 12 12 12 13 13 13 13 14 14 14 14 15 15 15 16 16 16 17 17 17 17 17 17 18 18 18 18 19 19 19 20
