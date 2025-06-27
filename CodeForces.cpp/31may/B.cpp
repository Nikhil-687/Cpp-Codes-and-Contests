#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < n;i++){
            cin >> b[i];
        }
        int maxa = 0, maxb = 0;
        vector<int> maxA, maxB;
        for(int i = 0;i < n;i++){
            if(a[maxa] < a[i]){maxa = i;}
            if(b[maxb] < b[i]){maxb = i;}
            maxB.push_back(maxb);
            maxA.push_back(maxa);
        }
        vector<int> r;
        for(int i = 0;i < n;i++){
            int ind1, ind2;
            if(a[maxA[i]] > b[maxB[i]]){
                ind1 = maxA[i];
            }
            else{
                ind1 = maxB[i];
            }
            ind2 = i-ind1;

            r.push_back(pow(2, ))
        }
    }
}