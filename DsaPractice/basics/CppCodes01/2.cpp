#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    cout<<ch<<endl;
    int a;
    a= ch;
    int b=1*a;
    if (47<b){
        if (b<58){
            cout<<"Input is a NUMERICAL VALUE"<<endl;
        } 
    }
    else if(64<b){
        if (b<91){
            cout<<"Input is a UPPERCASE LATTER"<<endl;
        }
    }    
    else if(96<b){
        if(b<123){
            cout<<"Input is a LOWERCASE LATTER"<<endl;
        }
    }    
}