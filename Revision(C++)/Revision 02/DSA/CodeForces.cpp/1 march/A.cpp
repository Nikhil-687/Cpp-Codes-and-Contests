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
    int r, c;
    cin >> r >> c;
    vector<char> b(c,0);
    vector<vector<char>> a(r, b);
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            cin >> a[i][j];
        }
    }
    int oner = 0, twor = 0, threer = 0, fourr = 0, morer = 0;
    int onec = 0, twoc = 0, threec = 0, fourc = 0, morec = 0;
    for(int i = 0;i < r;i++){
        int count = 0;
        for(int j = 0;j < c;j++){
            if(a[i][j] == '.'){count++;}
        }
        if(count == 2){twor++;}
        else if(count == 3){threer++;}
        else if(count == 4){fourr++;}
        else if(count > 4){morer++;}
    }
    for(int i = 0;i < c;i++){
        int count = 0;
        for(int j = 0;j < r;j++){
            if(a[j][i] == '.'){count++;}
        }
        if(count == 2){twoc++;}
        else if(count == 3){threec++;}
        else if(count == 4){fourc++;}
        else if(count > 4){morec++;}
    }
    long sum = 0;
    if(twor > 2){
        sum += nCr(twor,2);
        if(threer)sum += nCr(twor,1) * nCr(threer, 1) * nCr(3, 2);
        if(fourr)sum += nCr(twor,2) * nCr(fourr, 1) * nCr(4, 2);
        if(morer)sum += nCr(twor,2) * nCr(fourr, 1);
    }
    else if((twor && (threer || fourr))){}
}
