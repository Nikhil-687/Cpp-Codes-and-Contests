#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    string s;
    getline(cin, s, '}');

    vector<int> Arr;
    string a = "";
    for(int i = 7;i < s.size();i++){
        if(s[i] == ' '){
            continue;
        }
        if(s[i] == ','){
            if(a.size()){
                Arr.push_back(stoi(a));
            }
            a = "";
        }
        else{
            a+= s[i];
        }
    }
    if(a.size()){
        Arr.push_back(stoi(a));
    }
    int cnt = 1, mx = Arr[0];
    for(int i = 1;i < Arr.size();i++){
        // cout << Arr[i] << " ";
        if(Arr[i] > mx){
            cnt++;
            mx = Arr[i];
        }
    }
    cout << cnt << "\n";
}