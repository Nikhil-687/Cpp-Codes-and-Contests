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
    // cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<char> a(n);
        for(int i = 0;i < n;i++){
            a[i] = 'A' + i;
        }
        if(n == 5 && q == 7){
            char x;
            cout << "? A B\n";
            cin >> x;
            if('>' == x){
                swap(a[0], a[1]);
            }
            cout << "? " << a[0] << " " << 'C' << "\n";
            cin >> x;
            if('>' == x){
                a[2] = a[1];
                a[1] = a[0];
                a[0] = 'C';
            }
            else{
                cout << "? " << a[1] << " " << 'C' << "\n";
                cin >> x;
                if('>' == x){
                    swap(a[1], a[2]);
                }
            }


            // by now we have sorted first three posisions in three steps

                cout << "? " << a[3] << " " << a[4] << "\n";
                cin >> x;
                if('>' == x){
                    swap(a[3], a[4]);
                }

                vector<char> b, c, d;
                b.push_back(a[0]);
                b.push_back(a[1]);
                b.push_back(a[2]);
                c.push_back(a[3]);
                c.push_back(a[4]);

                int i, j;
                for( i = 0, j = 0;i < 3 && j < 2;){
                    cout << "? " << b[i] << " " << c[j] << "\n";
                    cin >> x;
                    if('>' == x){
                        d.push_back(c[j]);
                        j++;
                    }
                    else{
                        d.push_back(b[i]);
                        i++;
                    }
                }

                for(;i < 3;i++){
                    d.push_back(b[i]);
                }
                for(;j < 2;j++){
                    d.push_back(c[j]);
                }

        for(int k = 0;k < n;k++){
            a[k] = d[k];
        }




        }
        else{

        
        int i = 1;
        char x;
        
        while(i <= n){
            for(int j = 0;j <= n - 2* i;j+=2*i){
                vector<int> t, b, c;
                int k;
                for( k = 0;k < i;k++){
                    t.push_back(a[j+k]);
                }
                for( ;k < 2*i;k++){
                    b.push_back(a[j+k]);
                }
                int l, m;
                for( l = 0, m = 0;l < (ll)t.size() && m < (ll)b.size();){
                    cout << "? " << (char)t[l] << " " << (char)b[m] << "\n";
                    // cout.flush();
                    cin >> x;
                    if(x == '>'){
                        // t[l] > b[m]
                        c.push_back(b[m]);
                        m++;
                    }
                    else{
                        c.push_back(t[l]);
                        l++;
                    }
                }
                for(;l < (ll)t.size();l++){
                    c.push_back(t[l]);
                }
                for(;m < (ll)b.size();m++){
                    c.push_back(b[m]);
                }

                for(int k = 0;k < 2*i;k++){
                    a[j+k] = c[k];
                }

        // for(int j = 0;j < n;j++){
        //     cout << (char)a[j] <<" ";
        // }

            }
            i *= 2;
        }
        i = i/2;

        vector<int> t, b, c;
        for(int j = 0;j < i;j++){
            t.push_back(a[j]);
        }
        for(int j = i;j < n;j++){
            b.push_back(a[j]);
        }

        int l, m;
        for( l = 0, m = 0;l < (ll)t.size() && m < (ll)b.size();){
            cout << "? " << (char)t[l] << " " << (char)b[m] << "\n";
            // cout.flush();
            cin >> x;
            if(x == '>'){
                // t[l] > b[m]
                c.push_back(b[m]);
                m++;
            }
            else{
                c.push_back(t[l]);
                l++;
            }
        }
        for(;l < (ll)t.size();l++){
            c.push_back(t[l]);
        }
        for(;m < (ll)b.size();m++){
            c.push_back(b[m]);
        }
        for(int k = 0;k < n;k++){
            a[k] = c[k];
        }



        // cout << "! ";
        // for(int j = 0;j < n;j++){
        //     cout << (char)a[j];
        // }
        // cout << "\n";



        // for(int i = 0;i < n;i++){
        //     for(int j = 0;j < n-1;j++){
        //         cout << "? " << a[j] << " " << a[j+1] << "\n";
        //         cin >> x;
        //         if('>' == x){
        //             swap(a[j], a[j+1]);
        //         }
        //     }
        // }

        }
        cout  << "! ";

        for(int i = 0;i < n;i++){
            cout << a[i];
        }
        cout << "\n";

    }
    
    return 0;
}