#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space>0){
            cout<<"  ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}