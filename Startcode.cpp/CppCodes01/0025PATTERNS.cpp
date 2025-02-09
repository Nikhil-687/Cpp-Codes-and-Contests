#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n+1){
        int space= row;
        while(space>0){
            cout<<"  ";
            space=space-1;
        }
        int col=1;
        while(col<=n-row+1){
            cout<<row+col-1<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}