#include<bits/stdc++.h>
using namespace std;

inline int diarection(string x){
	if(x[0] == 't')return 0;
    if(x[0] == 'd')return 1;
    if(x[0] == 'l')return 2;
    return 3;
}
inline int Invdiarection(string x){
	if(x[0] == 't')return 1;
    if(x[0] == 'd')return 0;
    if(x[0] == 'l')return 3;
    return 2;
}

int main(){
	int n;
    cin >> n;
    vector<int [4]> mp(52);
    int index = 0;
    for(int i =  0;i < n;i++){
    	int exis, ne;
        string dia;
        cin >> exis >> ne >> dia;
        int d = diarection(dia);
        mp[exis][d] = ne;
        mp[ne][Invdiarection(dia)] = exis;
    }
    int x;
    cin >> x;
    // for(auto i : mp[x]){
    // 	if(i == 0)cout << "-1 ";
    //     else cout << i << " ";
    // }
    for(int i = x;i <= x;i++){
        for(int j = 0;j < 4;j++){
            if(mp[i][j])cout << mp[i][j] << " ";
            else cout << "-1 ";
        }
        // cout << mp[i][0] << " " << mp[i][1] << " " << mp[i][2] << " " << mp[i][3] << " \n";
    }
return 0;
}
