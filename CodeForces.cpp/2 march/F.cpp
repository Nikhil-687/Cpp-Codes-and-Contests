#include<bits/stdc++.h>
using namespace std;

bool isSubseq(string a, string b){
    int i = 0;
    for(int j = 0; i < a.size() && j < b.size(); j++){
        if(a[i] == b[j]){i++;}
    }
    if(i == a.size()){return 1;}
    return 0;
}

void complete(string a, string& b){
    int i = 0;
    for(int j = 0; i < a.size() && j < b.size(); j++){
        if(a[i] == b[j]){i++;}
    }   
    for(;i < a.size();i++){b+= a[i];}
}

void swap(string& ans, string t, int n){
    int z = 0;
    char first,last;
    for(int i = t.size();i>=0;i--){
        if(t[i] != t[n]){first = t[n];last = t[i];z = 1;break;}
    }
    if(!z)return ;
    for(int i = 0;i < ans.size();i++){
        if(ans[i] == first){
            for(int j = ans.size(); j >= 0;j--){
                if(ans[j] == last){swap(ans[i], ans[j]);return ;}
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    string ans = "";
    vector<string> que;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        que.push_back(s);
    }
    string t;
    cin >> t;
    int z = 0;
    for(int i = 0;i < n;i++){if(isSubseq(t, que[i])){cout << "NO\n";goto X;}}
    Y:;
    for(int i = 0;i < n;i++){complete(que[i], ans);}
    if(!isSubseq(t, ans)){cout << "YES\n";cout << ans << "\n";}
    else if(z <= n){if(z > 0)swap(ans,t, z-1);swap(ans,t, z);z++;goto Y;}
    else{cout << "NO\n";}
    X:;
}