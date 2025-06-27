#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = (n)/2;
    if(n%2){sum = n*((n+1)/2);}
    else{sum = (n/2)*((n+1));}
    long long sum2 = 0;
    long long rem = -1, end = -1;
    for(int i = 1;i < n;i++){
        sum2+= i;
        if(sum2 == sum-sum2){
            end = i;
            cout << "YES\n" << end << "\n";
            for(int i = 1;i <= n;i++){
                cout << i << " ";
                if(i == end){cout << "\n" << n-end << "\n";}
            }
            goto X;
        }
        if(sum2 > sum-sum2){
            if((2*sum2 - sum) > i*2 || (2*sum2 - sum)%2 != 0){cout <<"NO\n";goto X;}
            else{
                end = i;
                rem = (2*sum2 - sum)/2;
                cout << "YES\n";
                cout << end-1 << "\n";
                for(int i = 1;i <= n;i++){
                    if(i != rem)cout << i << " ";
                    if(i == end){cout << "\n" << n-end+1 << "\n" << rem << " ";}
                }
                goto X;
            }
        }
    }
    cout << "NO\n";
    X:;

}