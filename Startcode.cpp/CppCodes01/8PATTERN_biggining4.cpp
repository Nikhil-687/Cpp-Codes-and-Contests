//     . . . 3 2 1
//     . . . 3 2 1
//     . . . 3 2 1
//     . . . . . .
//     . . . . . .
//...... . . . . .
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<n){
            cout<<n-j<<"  ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
