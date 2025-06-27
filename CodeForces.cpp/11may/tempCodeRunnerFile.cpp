#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define mii map<int,int>
#define msi map<string,int>
#define msii map<string,string>


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vi a;
    for(int i = 0; i < t; i++){
        int n, m ,p, q
        cin >> n >> m >> p >> q;
        if(n%p == 0){
            if((n/p)*q == m){a.push_back(1);}
            else{a.push_back(0);}
        }
        else{
            {a.push_back(1);}
        }
    }
    return 0;
}