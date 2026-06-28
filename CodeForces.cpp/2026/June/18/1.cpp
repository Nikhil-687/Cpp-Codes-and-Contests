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
 

int mex(vector<int> a){
    umii mp;
    for(int i = 0;i < a.size();i++){
        mp[a[i]]++;
    }
    for(int i =  0;i < a.size();i++){
        if(!mp[i]){
            return i;
        }
    }
    return a.size();
}

int findPal(vector<int> a, int combine, int id1, int id2){
    if(combine){
        int i, j;
        for( i = combine, j = combine-1;i < a.size() && j >= 0;i++,j--){
            if(a[i] != a[j]){
                vector<int> ans;
                for(int k = j+1;k < i;k++){
                    ans.push_back(a[k]);
                }
                return mex(ans);
            }
        }
        vector<int> ans;
                for(int k = j+1;k < i;k++){
                    ans.push_back(a[k]);
                }
                return mex(ans);
    }
    
    vector<int> a1, a2;
    int i, j;
    for( i = id1+1, j = id1-1;i < a.size() && j >= 0;i++,j--){
            if(a[i] != a[j]){
                vector<int> ans;
                for(int k = j+1;k < i;k++){
                    ans.push_back(a[k]);
                }
                a1 = ans;
                break;
            }
        }
        if(a1.size() == 0){
            for(int k = j+1;k < i;k++){
                    a1.push_back(a[k]);
                }
        }
        i = 0, j = 0;
    for( i = id2+1, j = id2-1;i < a.size() && j >= 0;i++,j--){
            if(a[i] != a[j]){
                vector<int> ans;
                for(int k = j+1;k < i;k++){
                    ans.push_back(a[k]);
                }
                a2 = ans;
                break;
            }
        }if(a2.size() == 0){
            for(int k = j+1;k < i;k++){
                    a2.push_back(a[k]);
                }
        }

        vector<int> a3;
        int pos = 1;
        for( i = id1, j = id2;i < j;i++,j--){
            if(a[i]!= a[j]){
                pos = 0;
            }
        }

        int answer = mex(a1);
    if(pos){

        
        for(;i < a.size() && j >= 0;i++,j--){
            if(a[i] != a[j]){
                vector<int> ans;
                for(int k = j+1;k < i;k++){
                    ans.push_back(a[k]);
                }
                a3 = ans;
                break;
            }
        }
        if(a3.size() == 0){
            for(int k = j+1;k < i;k++){
                    a2.push_back(a[k]);
                }
        }


        answer = max(answer, mex(a3));
    }


    return max(answer, mex(a2));

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(2*n);
        int id1 = -1, id2 = -1;
        for (int i = 0; i < 2*n; i++) {
            cin >> a[i];
            if(a[i] == 0){
                if(id1 == -1){
                    id1 = i;
                }
                else{
                    id2 = i;
                }
            }
        }

        int combine = 0;
        for(int i = 1;i < 2*n;i++){
            if(a[i] == 0 && a[i-1] == 0){
                combine = i;
            }
        }

        cout << findPal(a, combine, id1, id2) << "\n";
        
    }
    
    return 0;
}