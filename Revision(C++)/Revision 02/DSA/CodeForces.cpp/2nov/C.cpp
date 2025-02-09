#include<bits/stdc++.h>
using namespace std;


int fun(int n, int m, int a){
    int count = 0;
    while(a){
        if(a%n == 0){
            a = a/n;
            count++;
            return count;
        }
        else if(a%m == 0){
            a = a/m;
            count++;
            return count;
        }
        else{
            if(m > n){
                int t = m;
                m = m-a/m;
                a = a%t;
            }
            else {
                int t = n;
                n = n-a/n;    
                a = a%t;
            }
            count++;
        }
    } 
    return count; 
}


int main(){
    int n, m, a;
    cin >> n >> m >> a;
    cout << fun(n, m, a);
}