#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> & a, int b, int j){
    a.push_back(b);
    for(int i = a.size()-1; i > j;i--){
        swap(a[i], a[i-1]);
    }
}

int main(){
    long long n;
    cin >> n;
    vector<int> a;
    if(n == 1){cout << 1;}
    else if( n < 4){cout << "NO SOLUTION";}
    else if(n < 10){
        a.push_back(2);
        a.push_back(4);
        a.push_back(1);
        a.push_back(3);
        int j = 5, i = 0;
        Y:;
        for( i = 0, j ;i < a.size() && j <= n;j++,i+=2){
            insert(a, j, i);
        }
        if(j == n+1){goto X;}
        else goto Y;
        X:;
        for (int i = 0; i < a.size(); i++)
        {
            /* code */
            cout << a[i] << " ";
        }        
    }
    else{
        for(int i = 1;i <= n;i+=2){
            a.push_back(i);
        }
        for(int i = 2;i <= n;i+= 2){
            a.push_back(i);
        }
        for(int i = 0;i < a.size();i++){
            cout << a[i] << " ";
        }
    }
}