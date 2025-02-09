#include<iostream>
using namespace std;
int main(){
    long long p;
    cout<<"Determining a number is Prime or not"<<endl;
    cin>>p;
    int isprime;
    int i=2;
    while(i<p){
        if(p%i == 0){
            cout<<p<<" is not a prime number";
            i=i+p;
            isprime= 0;

        }
        i=i+1;
        
    }
    if (isprime != 0)
    {
        cout<<p<<" is a prime number";        
    }
}  