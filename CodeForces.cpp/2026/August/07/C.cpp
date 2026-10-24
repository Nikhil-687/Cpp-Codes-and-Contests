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
 

int sum(vector<int> &a, vector<int> & b) {
    int s = 0;
    int i, j;
    for( i = a.size()-1, j = b.size()-1; i >= 0 && j >= 0;) {
        if(a[i] > b[j]){
            s += a[i];
            i--;
        }
        else{
            while(a[i] == b[j] && j >= 0 && i >= 0){
                j--;
                i--;
            }
            j--;
        }
    }
    if(j < 0){
        for(; i >= 0; i--){
            s += a[i];
        }
    }
    return s;
}
int top(vector<int> &a, vector<int> & b, int x) {
    int s = 0;
    int i, j, k;
    for( i = a.size()-1, j = b.size()-1, k = 0; i >= 0 && j >= 0 && k < x;) {
        if(a[i] > b[j]){
            s += a[i];
            i--;
            k++;
        }
        else{
            while(a[i] == b[j] && j >= 0 && i >= 0){
                j--;
                i--;
            }
            j--;
        }
    }
    if(j < 0){
        for(; i >= 0 && k < x; i--, k++){
            s += a[i];
        }
    }
    return s;
}

int32_t main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vi a(x), b(y);
        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < y; i++) {
            cin >> b[i];
        }
        
        vector<int> empty;
        if(x < n && y < m){
            cout << sum(a, empty) + sum(b, a) << endl;
        }
        else if(x < n){
            cout << sum(a, empty) + top(b, a, m) << endl;
        }
        else if(y < m){
            cout << top(a, b, n) + sum(b, empty) << endl;
        }
        else{
            int ans = 0;
            n--;
            m--;
            int cnt = 0;
            for(int i = a.size()-1, j = b.size()-1; i >= 0 && j >= 0;){
                if(a[i] > b[j] && (n || cnt)){
                    ans+= a[i];
                    i--;
                    if(n)
                    n--;
                    else cnt--;
                    a.pop_back();
                }
                else if(a[i] < b[j] && (m || cnt)){
                    ans+= b[j];
                    j--;
                    if(m)
                    m--;
                    else cnt--;
                    b.pop_back();
                }
                else if(a[i] == b[j] && (n || m || cnt)){
                    cnt++;
                    ans+= a[i];
                    i--;
                    j--;
                    if(n)
                    n--;
                    if(m)
                    m--;
                    if(!n && !m && cnt){
                        cnt--;
                    }
                    a.pop_back();
                    b.pop_back();
                }
            }
            if(a.size() && (n || cnt)){
                for(int i = a.size()-1; i >= 0 && n; i--){
                    ans+= a[i];
                    if(n)
                    n--;
                    else cnt--;
                }
            }
            if(b.size() && (m || cnt)){
                for(int i = b.size()-1; i >= 0 && m; i--){
                    ans+= b[i];
                    if(m)
                    m--;
                    else cnt--;
                }
            }
            if(a.size() && b.size()){
                ans += max(a[a.size()-1], b[b.size()-1]);
            }
            else if(a.size()){
                ans += a[a.size()-1];
            }
            else if(b.size()){
                ans += b[b.size()-1];
            }
            cout << ans << endl;

        }
    }
    
    return 0;
}