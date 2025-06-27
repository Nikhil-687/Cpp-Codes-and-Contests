#include<iostream>
using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    
    int a=0;
    int b=1;
    long long sum;

    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i++){
        
        sum=a+b;
        cout<<"* "<<i<<"th tearm of the series is "<<sum<<"."<<endl;
        a=b,b=sum;
    }
    cout<<endl<<"*** The final "<<n<<"th tearm of the series is: "<<sum<<endl<<endl<<endl;

}