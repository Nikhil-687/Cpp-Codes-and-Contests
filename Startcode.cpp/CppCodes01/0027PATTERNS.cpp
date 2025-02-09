#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n+1){
        //create spaces 
        int space=n-row+1;
        while(space>0){
            cout<<"  ";
            space=space-1;
        } 

        //create box 1 
        int col1=1;
        while(col1<=row){
            cout<<col1<<" ";
            col1=col1+1;
        }

        //create box 2 
        int col2=1;
        while(col2<row){
            cout<<row-col2<<" ";
            col2=col2+1;
        }
        cout<<endl;
        row=row+1;
    }
}