#include<bits/stdc++.h>
using namespace std;

vector<string> s;
vector<vector<string>> ans;
bool Valid(int i, int j){
    for(int x = 0;x < s.size();x++){
        if(s[x][j] == 'Q'){return 0;}
    }
    for(int x = 0;x < s.size();x++){
        if(s[i][x] == 'Q'){return 0;}
    }
    for(int x = 0;x < s.size();x++){
        int y = abs(j - i) - x;
        if(y >= 0 && y < s.size()){
            if(s[x][y] == 'Q')return 0;
        }
        int z = abs(j + i) - x;
        if(z >= 0 && z < s.size()){
            if(s[x][z] == 'Q')return 0;
        }
    }
    return 1;
}
vector<vector<string>> solveNQueens(int N, int i = 0) {
    if(s.size() == 0){
        string x = "";
        for(int i = 0;i < N;i++){
            
            x += '.';
            
        }
        s.push_back(x);
    }
    if(i == N-1){
        for(int i = 0;i < N;i++){
            if(Valid(N-1, i)){
                s[N-1][i] = 'Q';
                ans.push_back(s);
                s[N-1][i] = '.';
            }
        }
        return ans;
    }
    for(int j = 0;j < N;j++){
        if(Valid(i, j)){
            s[i][j] = 'Q';
            solveNQueens(N, i+1);
            s[i][j] = '.';
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << "a";
    solveNQueens(n);

    for(auto i : ans){
        for(auto j : i){
            cout << j << "\n";
        }
        cout <<"\n";
    }
}