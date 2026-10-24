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
 

bool pos(string a, string b){
    int o1 = 0, e1 = 0;
    int o2 = 0, e2 = 0;
    for(int i = 0;i < a.size();i++){
        if(a[i] == '0')e1++;
        else{
            o1++;
        }
        if(b[i] == '0')e2++;
        else{
            o2++;
        }
    }
    return (e1 == e2 || o1 == o2);
}

int swaps(string ae, string be){
    int cnt = 0;
    int n = ae.size();
    vector<int> n1(n), n0(n);

    int z = -1, o = -1;

    for(int i = be.size()-1;i >= 0;i--){
        n1[i] = o;
        n0[i] = z;
        if(be[i] == '0'){
            z = i;
        }
        if(be[i] == '1'){
            o = i;
        }
    }


    // cout << ae << " " << be << "\n";
    // cout << "N0: ";
    // for(int i = 0;i < n;i++){
    //     cout << n0[i] << " ";
    // }
    // cout << "\n";
    // cout << "N1: ";
    // for(int i = 0;i < n;i++){
    //     cout << n1[i] << " ";
    // }
    // cout << "\n";

    for(int i = 0;i < n;i++){
        if(i == 0){}
        else{
            n1[i] = max(n1[i], n1[i-1]);
            n0[i] = max(n0[i], n0[i-1]);
        }
        if(ae[i] == be[i]){}
        else{
            if(ae[i] == '1'){
                cnt = cnt + n1[i] - i;
                be[n1[i]] = '0';
                n1[i] = n1[n1[i]];
                n0[i] = min(n0[i], i);
            }
            else{
                cnt = cnt + n0[i] - i;
                be[n0[i]] = '1';
                n0[i] = n0[n0[i]];
                n1[i] = min(n1[i], i);
            }
        }
    }

    return cnt;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        string ae = "", ao = "";
        string be = "", bo = "";

        for(int i = 0;i < n;i++){
            if(i%2 == 0){
                ae += a[i];
                be += b[i];
            }
            else{
                ao += a[i];
                bo += b[i];
            }
        }
        
        if(!pos(ae, be)){
            cout << -1 << "\n";
            continue;
        }
        if(!pos(ao, bo)){
            cout << "-1\n";
            continue;
        }

        int x = swaps(ae, be);
        int y = swaps(ao, bo);
        cout << x + y << "\n";
    }
    
    return 0;
}


// 5
// 4
// 0100
// 0001
// 4
// 0100
// 0010
// 6
// 110000
// 000011
// 8
// 10101010
// 10101010
// 5
// 01001
// 10010
