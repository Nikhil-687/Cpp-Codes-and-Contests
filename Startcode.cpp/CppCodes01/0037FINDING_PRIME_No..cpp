#include<iostream>
using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    int isprime;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime ==0){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        cout<<n<<" is a prime number"<<endl;
    }    
}
