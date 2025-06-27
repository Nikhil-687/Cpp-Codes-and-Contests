#include<iostream>
using namespace std;
int main(){
    cout<<"hi is it working"<<endl;
    int a,b;
    cout<<"order computer to display prime numbers between "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    int i=2;
    int k=2;
    
    while(i<b)
    {
        
        if(i>a)
        {
            
            int isprime= 3;
            while (k<i)
            {
                
            
                if(i%k != 0)
                { 

                    isprime = isprime+1;
                    if(isprime == i)
                    {

                        cout<<"*"<<i<<endl;

                    } 
                    k=k+1;
            
                }    
                else
                {

                    isprime = isprime;
                    k=k+1;

                }
                

            }

        }
        i=i+1;
        
    }
    cout<<endl;

}