#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col= 1;
        while(col<=row){
            char a='A'+n-row+col-1;
            cout<<a;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
