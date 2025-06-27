#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define fi first    
#define se second
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define msi map<string, int>
#define msii map<int, string>
#define umii unordered_map<int, int>
#define usi unordered_set<int>


bool great(vi a, vi b){
    
    // if(a[0] < b[0])return true;
    // else if(a[0] > b[0])return false;
    // else return a[1] > b[1]; 
}

int32_t main()
{

    
        string s;cin >> s;
        vvi a;
        int balance = 0; 
        for(int i = 0;i < s.size();i++){
            vi b;
            b.pb(balance);
            b.pb(i);    
            a.pb(b);
            if(s[i] == '('){balance++;}
            else{balance--;}
        }
        for(int i = 0;i < s.size();i++){
            for(int j = 1;j < s.size()-i;j++){
                sort(a.begin(), a.end(), great);
            }
        }
        string s2 = "";
        for(int i = 0;i < s.size();i++){
            s2+= s[a[i][1]];
        }
        cout << s2;
    return 0;
}