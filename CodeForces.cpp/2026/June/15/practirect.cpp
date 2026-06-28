#include<bits/stdc++.h>
using namespace std;

vector<int> countDistinctInSubmatrix(int N, vector<vector<int>>& A, int Q, vector<vector<int>>& queries) {
    //write your code here
    // for(int i = 0;i < N;i++){
    //     for(int j = 0;j < N;j++){
    //         cout << A[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    vector<vector<unordered_map<int, int>>> mp(N, vector<unordered_map<int, int>>(N));
    vector<int> ans;
    int n = N;
    for(int i = 0;i < n;i++){
        mp[i][0][A[i][0]]++;
    }
    for(int i = 0;i < n;i++){
        for(int j = 1; j < n;j++){
            mp[i][j][A[i][j]]++;
            for(int k = 1;k <= 10;k++){
                mp[i][j][k] = mp[i][j-1][k] + mp[i][j][k];
            }
        }
    }
    for(int i = 1;i < n;i++){
        for(int j = 0;j < n;j++){
            for(int k = 1;k <= 10;k++){
                mp[i][j][k] = mp[i][j][k] + mp[i-1][j][k];
            }
        }
    }

    // for(int i = 0;i < mp.size();i++){
    //     for(int j = 0;j < n;j++){
    //         cout << i << " " << j << "\n";
    //         for(int k = 1;k <= 10;k++){
    //             cout << mp[i][j][k] << "  ";
    //         }
    //         cout << "\n";
    //     }
    //     cout << "\n";
    // }
    
    for(int i = 0;i < Q;i++){
        int cnt = 0;
        cout << i << "\n";
        for(int k = 1;k <= 10;k++){
            
            cout << "1 ";
            int a = queries[i][0] - 1; // x1
            int b = queries[i][1] - 1; // y1
            int c = queries[i][2] - 1; // x2
            int d = queries[i][3] - 1; // y2
        
            int x, y, z;
            if(b > 0){
                x = mp[c][b-1][k];
            }
            else{
                x = 0;
            }
            
            if(a > 0){
                y = mp[a-1][d][k];
            }
            else{
                y = 0;
            }

            cout << "2 ";
            if(a > 0 && b > 0){
                z = mp[a-1][b-1][k];
            }
            else{
                z = 0;
            }
            
            cout << "3 ";
            int ans = mp[c][d][k] - x - y + z;
            if(ans > 0){
                cnt++;
            }

            cout << "4 ";
        }
        ans.push_back(cnt);
    }
    return ans;
    
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a, qu;
    for(int i = 0;i < n;i++){
        vector<int> temp(n);
        for(int j = 0;j  < n;j++){
            cin >> temp[j];
        }
        a.push_back(temp);
    }
    int q;cin >> q;
    for(int i = 0;i < q;i++){
        vector<int> temp(q);
        for(int j = 0;j  < q;j++){
            cin >> temp[i];
        }
        qu.push_back(temp);
    }
    vector<int> ans = countDistinctInSubmatrix(n, a, q, qu);
    for(auto i : ans){
        cout << i << "\n";
    }
}