#include<iostream>
using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is not ";
            break;
        }
    }
    cout<<"a prime number"<<endl;
}
