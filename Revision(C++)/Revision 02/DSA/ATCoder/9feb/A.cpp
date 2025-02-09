#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    //  A = 1, R = 2, C = 3, any = 4,
    // starting with A
    int prev = 0;// prev = 0 -> any, 1, 2, 3 -> A, B, C
    for(int i = 0;i < n;i++){
        if(a[i] == 0){
            if(prev == 0){
                
            }
            i++;
        }
    }
}