#include<bits/stdc++.h>
using namespace std;

long fact(int n)
{
    if(n==0)
      return 1;
    long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

long nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


int main() {
    int r, c, n, p;
    cin >> r >> c >> n >> p;
    vector<int> b(c,0);
    vector<vector<int>> a(r, b);
    vector<int> H(n+1, 0);
    vector<int> H2(r, 0);
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            cin >> a[i][j];
        }
    }
    int p2 = p;
    int count = 0;
    int indi = -1, indj = -1;
    while(p2--){
        for(int i = 0;i < r;i++){
            // int count = 0;
            if(!H2[i] && indi == -1)
            {
                for(int j = 0;j < c;j++){
                    if(a[i][j] == p){
                        if(i > 0){if(a[i-1][j] != 0 && a[i-1][j] <= n)H[a[i-1][j]]++;}
                        if(j > 0){if(a[i][j-1] != 0 && a[i][j-1] <= n)H[a[i][j-1]]++;}
                        if(i < r-1){if(a[i+1][j] != 0 && a[i+1][j] <= n)H[a[i+1][j]]++;}
                        if(j < c-1){if(a[i][j+1] != 0 && a[i][j+1] <= n)H[a[i][j+1]]++;}

                        if(i > 0){if(a[i-1][j] == p-1)indi = i-1; indj = j;}
                        if(j > 0){if(a[i][j-1] == p-1)indi = i; indj = j-1;}
                        if(i < r-1){if(a[i+1][j] == p-1)indi = i+1; indj = j;}
                        if(j < c-1){if(a[i][j+1] == p-1)indi = i; indj = j+1;}
                        break;
                    }
                }
            }else if(!H2[i])
            {
                int i = indi;
                int j = indj;
                if(indi > 0){if(a[i-1][j] != 0 && a[i-1][j] <= n)H[a[i-1][j]]++;}
                if(indj > 0){if(a[i][j-1] != 0 && a[i][j-1] <= n)H[a[i][j-1]]++;}
                if(indi < r-1){if(a[i+1][j] != 0 && a[i+1][j] <= n)H[a[i+1][j]]++;}
                if(indj < c-1){if(a[i][j+1] != 0 && a[i][j+1] <= n)H[a[i][j+1]]++;}    
                
                if(i > 0){if(a[i-1][j] == p-1)indi = i-1; indj = j;}
                if(j > 0){if(a[i][j-1] == p-1)indi = i; indj = j-1;}
                if(i < r-1){if(a[i+1][j] == p-1)indi = i+1; indj = j;}
                if(j < c-1){if(a[i][j+1] == p-1)indi = i; indj = j+1;}
                break;
            }
        
        for(int i = 0;i < r;i++){
            // int count = 0;
            if(!H2[i])
            {
                bool doit = 1;
                for(int j = 0;j < c;j++){
                    // cout << a[i][j] << " ";
                    if(a[i][j] != 0 && a[i][j] < n){a[i][j]++;doit = 0;}
                }
                if(doit){H2[i] = 1;}
            }
            // cout << "\n";
        }
        // cout << "\n\n";
    }}
    for(int i = 1;i <= n;i++){
        if(H[i]){cout << i << endl;count++;}
    }
    cout << count << "/" << n-1 << "\n";
}

// 4 5 11 2
// 11 0 0 0 0
// 10 1 2 0 0
// 9 0 3 4 0
// 8 7 6 5 0