#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define vvc vector<vector<char>>
#define vc vector<char>
#define vs vector<string>
#define mii map<int,int>
#define msi map<string,int>
#define msi map<string,int>
#define mci map<char,int>
#define mcc map<char,char>
#define mll map<long long,long long>
#define msi map<string,int>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    vector<vector<int>> ans;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int initial = 1;
        for(int i = 0; i < n-1; i++){
            if(a[i] == '<'){
                initial++;
            }
            else{
                initial--;
            }
        }
        vector<int> a2;
        int indec = initial, ininc = initial;
        a2.push_back(initial);
        for(int i = 0;i < n;i++){
            if(a[i] == '<'){
                if(indec == initial-1){
                    // ininc++;
                    indec--;
                }
                else indec--;
                a2.pb(indec);
            }
            else{
                if(ininc == initial-1){
                    ininc++;
                    // indec--;
                }
                else ininc++;
                a2.pb(ininc);
            }
        }
        int min = a2[0];
        for(int i = 0;i < a2.size();i++){
            if(a2[i] < min){
                min = a2[i];
            }
        }
        for(int i = 0;i < a2.size();i++){
            a2[i] -= min;
            a2[i] += 1;
        }
        a2.push_back(n);
        ans.push_back(a2);
    }
    for(auto i : ans){
        for(int j = 0;i[j] <= i[i.size()-1];j++){
            cout << i[j] << " ";
        }
        cout << endl;
    }
    return 0;
}