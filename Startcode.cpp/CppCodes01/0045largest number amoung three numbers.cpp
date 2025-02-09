#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    if(a<b){
        if(b<c){
            cout<<c<<" is the largest number amoung the above three numbers"<<endl;
        }
        else{
            cout<<b<<" is the largest number amoung the above three numbers"<<endl;
        }
    }
    else{
        if(b<c){
            cout<<c<<" is the largest number amoung the above three numbers"<<endl;
        }
        else{
            cout<<a<<" is the largest number amoung the above three numbers"<<endl;
        }

    }

}