#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 998244353; 
 
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
unordered_map<int, unordered_map<int, unordered_map<int, unordered_map<int, int>>>> mp;

int solve(int x1, int x2, int x3, int x){
    int ans = 0;
    if(x == 1 && x1 == 1 && x2 == 0 && x3 == 0){return 1;}
    if(x == 2 && x2 == 1 && x1 == 0 && x3 == 0){return 1;}
    if(x == 3 && x3 == 1 && x2 == 0 && x1 == 0){return 1;}
    if(mp[x1][x2][x3][x])return mp[x1][x2][x3][x];
    if(x1 != 0 && x == 1){
        if(!mp[x1-1][x2][x3][1]){
            mp[x1-1][x2][x3][1] = solve(x1-1, x2, x3, 1);
        }
        if(!mp[x1-1][x2][x3][2]){
            mp[x1-1][x2][x3][2] = solve(x1-1, x2, x3, 2);
        }
        mp[x1][x2][x3][x] = (mp[x1-1][x2][x3][2] + mp[x1-1][x2][x3][1]) % MOD;
    }
    if(x2 != 0 && x == 2){
        if(!mp[x1][x2-1][x3][1]){
            mp[x1][x2-1][x3][1] = solve(x1, x2 -1, x3, 1);
        }
        if(!mp[x1][x2-1][x3][2]){
            mp[x1][x2-1][x3][2] = solve(x1, x2 -1, x3, 2);
        }
        if(!mp[x1][x2-1][x3][3]){
            mp[x1][x2-1][x3][3] = solve(x1, x2 -1, x3, 3);
        }
        mp[x1][x2][x3][x] = (mp[x1][x2-1][x3][2] + mp[x1][x2-1][x3][1] + mp[x1][x2-1][x3][3]) % MOD;
    }
    if(x3 != 0 && x == 3){
        if(!mp[x1][x2][x3-1][2]){
            mp[x1][x2][x3-1][2] = solve(x1, x2, x3 -1, 2);
        }
        if(!mp[x1][x2][x3-1][3]){
            mp[x1][x2][x3-1][3] = solve(x1, x2, x3 -1, 3);
        }
        mp[x1][x2][x3][x] = (mp[x1][x2][x3-1][2] + mp[x1][x2][x3-1][3]) % MOD;
    }
    return mp[x1][x2][x3][x];
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        n = x1 + x2 + x3;

        mp[0][0][0][1] = 1;
        mp[0][0][0][2] = 1;
        mp[0][0][0][3] = 1;

        cout << (solve(x1, x2, x3, 1) + solve(x1, x2, x3, 3) + solve(x1, x2, x3, 2)) % MOD;
        // if(n %2 == 0 && x2 == x1+ x3){
        //     cout << 2ll * nCr_mod(x2, x1) % MOD;
        // }
        // else if(n %2 != 0 && x2== x1+ x3+1){
        //     cout << nCr_mod(x1+x3, x1);
        // }
        // else if(n%2 != 0 && x2 == x1+ x3-1){
        //     cout << nCr_mod(x1 + x3 + 1, x1);
        // }


    }
    
    return 0;
}