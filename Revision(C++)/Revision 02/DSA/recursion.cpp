#include<bits/stdc++.h>

double Exponent(int m,int n){
    if(n == 0)return 1;
    if(n == -1)return (1/m);
    else if(n < 0){
        return (1/m)*Exponent(m,n+1);
    }
    if(n == 1){return m;}
    if(n%2 == 0){return Exponent(m*m,n/2);}
    return m*Exponent(m*m,(n-1)/2);
}

double ithter(int x, int i){
    if(i == 1){
        return x;
    }
    return (x/i)*ithter(x,i-1);
}



double exponentToe(int x,int n){
    if(n == 0){
        return 1;
    }
    return ithter(x,n-1)+exponentToe(x,n-1);
}

double expe(int x, int n, int i)
{
    static int p = 0;
    if(i == n){
        p++;
        return 1+(x/p);
    }
    p++;
    return 1+(x/p)*expe(x,n,i+1);
}

double expration(int x, int n){
    return expe(x,n,0);
}

int A[10][10] = {0};

long long ncr(int n,int r){
    if(r == 0 || n == r)return 1;
    if(n<=10){if(A[n][r]!=0)return A[n][r];else A[n][r] = ncr(n-1,r-1)+ncr(n-1,r);return A[n][r];}
    return ncr(n-1,r-1)+ncr(n-1,r);    
}


int main(){
    int n = 3, m = 5;
    // std::cin >> m >> n;
    std::cout << "Exponent of m to n is: " << Exponent(m,n) << "\n";
    // std:: cout << "\n" << exponentToe(3,10) <<"\n";
    std:: cout << "\n" << expration(3,10) <<"\n";
    std:: cout << "\n" << ncr(30,10) <<"\n";
    std:: cout << "\n" << ncr(5, 2) <<"\n";


}