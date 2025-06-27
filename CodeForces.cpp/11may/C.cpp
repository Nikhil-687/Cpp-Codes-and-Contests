#include<bits/stdc++.h>
using namespace std;

int search(vector<int> a, int target){
    int low = 0;
    int high = a.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(a[mid] == target){
            return mid;
        }
        else if(a[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

void solve(vector<vector<int>> &a, int n, int m){
    if(m == 1){
        a[n/2][n/2] = 0;
        return;
    }
    if(m == 2){
        a[n/2][n/2] = 3;
        a[n/2][n/2+1] = 2;
        a[n/2+1][n/2] = 1;
        a[n/2+1][n/2+1] = 0;
        return;
    }
    int count = (m-2)*(m-2);
    int k = (n-m)/2;
        m = m+k;
        for(int j = n/2; j >= k; j--){
            a[k][j] = count++;
            if(j != k)a[j][k] = count++;
        }
        for(int j = n/2; j >= k; j--){
            a[m][j] = count++;
            if(j != k)a[n-j][k] = count++;
        }
        for(int j = n/2; j >= k; j--){
            a[j][m] = count++;
            if(j != k)a[k][n-j] = count++;
        }
        for(int j = n/2; j <= m; j++){
            a[m][j] = count++;
            if(j != m)a[j][m] = count++;
        }
    
    if(m >= 3){
        solve(a, n, m-2);
    }
}

void solve2(vector<vector<int>> &a, int n, int m){
    if(m == 1){
        a[n/2][n/2] = 0;
        return;
    }
    if(m == 2){
        a[n/2][n/2] = 3;
        a[n/2][n/2+1] = 2;
        a[n/2+1][n/2] = 1;
        a[n/2+1][n/2+1] = 0;
        return;
    }
    int count = (m-2)*(m-2);
    int k = (n-m)/2;
        m = m+k;
        for(int j = n/2+1; j >= k; j--){
            a[k][j] = count++;
            if(j != k)a[j][k] = count++;
        }
        for(int j = n/2+1; j >= k; j--){
            a[m][j] = count++;
            if(j != k)a[n-j][k] = count++;
        }
        for(int j = n/2+1; j >= k; j--){
            a[j][m] = count++;
            if(j != k)a[k][n-j] = count++;
        }
        for(int j = n/2+1; j <= m; j++){
            a[m][j] = count++;
            if(j != m)a[j][m] = count++;
        }
    
    if(m >= 3){
        solve(a, n, m-2);
    }
}


int main(){
    int t;
    cin >> t;
    vector<vector<vector<int>>> ans;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> b(n,0);
        vector<vector<int>> a(n, b);
        if(n%2 == 0)solve(a, n, n);
        else{
            solve2(a, n, n);
        }
        // for(auto j: a){
        //     for(auto k: j){
        //         cout << k << " ";
        //     }
        //     cout << endl;
        // }
        ans.push_back(a);
    }
    for(int i = 0; i < t; i++){
        for(auto j: ans[i]){
            for(auto k: j){
                cout << k << " ";
            }
            cout << endl;
        }
    }
    return 0;
}