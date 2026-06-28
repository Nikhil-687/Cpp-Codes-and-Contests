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
        int n;
        cin >> n;
        string s;
        cin >>s;
        // s[0] = '*';
        // cout << (s[0] == '*') << "\n";
        if(n%2 == 1){
            for(int i = 0;i < n;i++){
                if(s[i] != '*'){cout << "No\n";goto X;}
            }
            cout << "Yes\n";
            X:;
        }
        else{
            // int cnt = 0;
            for(int i = 0;i < s.size()-1;i++){
                // cout << i << ": " << s << " \n";
                if(s[i] == s[i+1] && s[i] != '*'){
                    s[i] = '*';
                    s[i+1] = '*';
                    for(int x = i-1, y = i+2;x >= 0 && y < n;x--, y++){
                        // if(s[x] == s[y]){
                        //     s[x] = '*';
                        //     s[y] = '*';
                        //     // cout << x << " " << y << "\n";
                        // }
                        // else{
                        //     break;
                        // }
                        if(s[x] == '*'){
                            for(int z = x;z >= 0;z--){
                                if(s[z] != '*'){x = z;break;}
                            }
                        }
                        if(s[y] == '*'){
                            for(int z = y;z < n;z++){
                                if(s[z] != '*'){y = z;break;}
                            }
                        }
                        if(s[x] == s[y]){
                            s[x] = '*';
                            s[y] = '*';
                            // cout << x << " " << y << "\n";
                        }
                        else{
                            break;
                        }
                    }
                    // cout << i << " " << i+1 << " \n" ;
                    // cnt++;
                }
                else if(s[i] == '*'){
                    for(int j = i - 1;j >= 0;j--){
                        if(s[j] != '*'){
                            if(s[j] == s[i+1]){
                                s[j] = '*';
                                s[i+1] = '*';
                                for(int x = j-1, y = i+2;x >= 0 && y < n;x--, y++){
                                    if(s[x] == '*'){
                                        for(int z = x;z >= 0;z--){
                                            if(s[z] != '*'){x = z;break;}
                                        }
                                    }
                                    if(s[y] == '*'){
                                        for(int z = y;z < n;z++){
                                            if(s[z] != '*'){y = z;break;}
                                        }
                                    }
                                    if(s[x] == s[y]){
                                        s[x] = '*';
                                        s[y] = '*';
                                        // cout << x << " " << y << "\n";
                                    }
                                    else{
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            // if(!cnt){
            //     cout << "No\n";
            // }
            // else{
                int im = 0;
                // while(cnt){
                //     for(int i = 0;i < n && cnt;i++){
                //         cnt = 0;
                //         if(a[i] == '*'){
                //             for(int j = i-1; j >= 0;j--){
                //                 if(a[j] != '*'){
                //                     for(int k = i+1; k < n;k++){
                //                         if(a[k] != '*'){
                //                             if(a[j] == a[k]){
                //                                 a[j] = '*';
                //                                 a[k] = '*';
                //                                 // cout << j << " " << k << "\n";
                //                                 cnt++;
                //                             }
                //                             else{
                //                                 goto X;
                //                             }
                //                             for(int x = j-1, y = k + 1; x >= 0 && y < a.size();x--, y++){
                //                                 if(a[x] == a[y]){
                //                                     a[x] = '*';
                //                                     a[y] = '*';
                //                                     // cout << x << " " << y << "\n";
                //                                     cnt++;
                //                                 }
                //                                 else{
                //                                     goto X;
                //                                 }
                //                             }
                //                         }
                //                     }
                //                 }
                //             }
                //         }
                //     }
                //     X:;
                // }
                for(int i = 0;i < n;i++){
                    if(s[i] != '*'){im = 1;}
                }
                if(!im){
                    cout << "Yes\n";
                }
                else{
                    cout << "No\n";
                }
            // }
            
        }
    }
    
    return 0;
}

// 6
// abaaab
// 50
// yyiimmmggmddnggybbyhhhddddhqnnxwwttwwxppnffqabbamm
// ************n**************q************n**q******