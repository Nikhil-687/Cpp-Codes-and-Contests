#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int col=1;
    while(col<=n){
        int row=1;
        while (col>=row){
            cout<<row<<" "; 
            row=row+1;
        }
        cout<<endl;
        col=col+1;
    }
}