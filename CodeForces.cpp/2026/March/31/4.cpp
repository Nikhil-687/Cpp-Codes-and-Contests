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
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vvi a(n, vector<int> (m));
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for(int j = 0;j < m;j++){
                a[i][j] = s[j] - '0';
                // cout << "Hello : " << i << " " << j << "\n";
            }
        }

        // cout << "Hello\n";
        vector<vector<int>> b;
        // ith loop -> (i, i) -> (i, m-i-1) -> (n-i-1, m-i-1) -> (n-i-1,i) -> (i, i)
        for(int i = 0;i <= (n-1)/2 && i <= (m-1)/2;i++){
            vector<int> temp;
            for(int j = i;j < m-i-1;j++){
                temp.push_back(a[i][j]);
            }
            for(int j = i; j < n-i-1; j++){
                temp.push_back(a[j][m-i-1]);
            }
            for(int j = m-i-1; j > i;j--){
                temp.push_back(a[n-i-1][j]);
            }
            for(int j = n-i-1; j > i; j--){
                temp.push_back(a[j][i]);
            }
            b.push_back(temp);
        }

        // for(auto i : b){
        //     for(auto j : i){
        //         cout << j << " ";
        //     }
        //     cout << "\n";
        // }

        int cnt = 0;

        for(auto a : b){
            int x = a.size();
            if(x < 4){continue;}
            for(int i = 0;i < a.size();i++){
                int idx = i % a.size();
                if(a[idx%x] == 1 && a[(idx+1)%x] == 5 && a[(idx+2)%x] == 4 && a[(idx+3)%x] == 3){
                    cnt++;
                    // cout << a[idx]
                }
            }
        }

        cout << cnt << "\n";
        
    }
    
    return 0;
}