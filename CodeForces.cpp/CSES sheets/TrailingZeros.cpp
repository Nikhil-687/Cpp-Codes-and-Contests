#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int count = 0;
    for(int i = 1;i*5 <= n;i++){
        count++;
        int i2 = i;
        while(i%5 == 0){count++;i = i/5;}
        i = i2;
    }
    cout << count;
}