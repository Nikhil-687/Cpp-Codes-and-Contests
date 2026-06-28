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
 

bool isP(int a, vector<int> b){
    for(auto i : b){
        if(a == i)return 1;
    }
    return 0;
}
bool isPos(int a, vector<int> b){
    while(a){
        int d = a % 10;
        a = a/10;
        if(isP(d, b)){}
        else return 0;
    }
    return 1;
}

int max_min(vector<int> a, vector<int> b){
    // maximum number less then a

}

int min_max(vector<int> a, vector<int> b){
    // minimum number greater then a
    if(a[0] < b[0]){
        int i = 0;
        while(a[i] < b[0]){a[i] = 0;i++;}
        if(a[i] < b[1]){a[i] = 0;}
        else if(a[i] > b[1]){
            a[i] = b[1];
        }
        else{
            int z = 0;
            for(int j = i;j < a.size();j++){
                if(a[j] < b[1]){
                    z = 1;
                }
            }
            if(!z){
                a[i] = b[0];
                for(int j = i+1;j < a.size();j++){
                    a[j] = b[1];
                }
            }
            else{
                a[i] = b[1];
                while(i < a.size() && (a[i] == b[0] || a[i] == b[1])){
                    i++;
                }
                if(i == a.size()){
                    for(int i = a.size()-1;i >= 0;i--){
                        if(a[i] == b[1]){
                            a[i] = b[0];
                            for(int j = i+1;j < a.size();j++){
                                a[i] = b[1];
                            }
                            break;
                        }
                    }
                }
                else{
                    if(a[i] > b[0]){
                        a[i] = b[0];
                        for(int j = i+1;j < a.size();j++){
                            a[i] = b[1];
                        }
                    }
                    else{
                        
                    }
                }
            }
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a, n;
        cin >> a >> n;
        int a2 = a;
        vi b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector<int> c;
        while(a){
            c.push_back(a%10);
            a = a/10;
        }
        a = a2;
        if(isPos(a, b)){
            cout << 0 << "\n";
        }
        else{
            int mn = max_min(c, b);
            int mx = min_max(c, b);
            cout << min(abs(mn - a), abs(mx - a)) << "\n";
        }

    }
    
    return 0;
}