#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    s = s.substr(1, s.size()-2);
    stringstream ss(s);

    int mx = -1, smx = -1;
    int num;
    vector<int> a;
    while(getline(ss, s, ',')){
        num = stoi(s);
        a.push_back(num);
    }

    if(a.size() <= 1){
        
    }
    for(int i = 0;i < a.size();i++){

    }


}