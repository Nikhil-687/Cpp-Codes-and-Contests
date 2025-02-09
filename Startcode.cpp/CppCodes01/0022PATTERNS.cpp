#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=n-row;
        while (col>0){
            cout<<"*"<<" "; 
            col=col-1;
        }
        cout<<endl;
        row=row+1;
    }
}