#include<bits/stdc++.h>
using namespace std;












int main() {
    int t;
    cin >> t;
    vector<vector<int>> ans;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> temp(m);
        vector<vector<int>> Deck(n, temp);
        vector<int> sol;
        vector<int> Index;
        vector<int> Series0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cin >> Deck[i][j];
            }
        }
        for(int i = 0;i < n;i++){
            Index.push_back(i);
            sort(Deck[i].begin(), Deck[i].end());
        }
        for(int i = 0;i < n;i++){
            Series0.push_back(Deck[i][0]);
        }
        for(int i = 0;i < n;i++){
            for(int j = 1;j < n;j++){
                if(Series0[j] < Series0[j-1]){swap(Series0[j], Series0[j-1]);swap(Index[j], Index[j-1]);}
            }
        }
        for(int i = 0;i < m;i++){
            if(i != 0){
                if(Deck[Index[0]][i] != Deck[Index[n-1]][i-1]+1){sol.push_back(-1); ans.push_back(sol);goto X;}
            }
            for(int j = 1;j < n;j++){
                if(Deck[Index[j]][i] != Deck[Index[j-1]][i]+1){sol.push_back(-1);ans.push_back(sol);goto X;}
            }
        }
        ans.push_back(Index);
        X:;
    }
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            if(ans[i][j] == -1)
                cout << ans[i][j] << " ";
            else{
                cout << ans[i][j]+1 << " ";
            }
        }
        cout << "\n";
    }
}
