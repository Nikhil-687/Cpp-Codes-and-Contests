#include<iostream>
using namespace std;
int main(){
    cout<<"enter the value n"<<endl;
    int n;
    cin>>n;
    cout<<"adding the numbers from 1 to "<<n<<endl<<"sum of numbers is: ";
    int sum=0;
    for(int i=1 ;i<=n;i++ ){
        sum=sum+i;
    }
    cout<<"Sum of first "<<n<<" Integers is "<<sum;
    cout<<endl;
}