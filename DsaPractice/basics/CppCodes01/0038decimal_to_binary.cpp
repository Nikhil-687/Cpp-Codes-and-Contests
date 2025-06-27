#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"enter a number in decimal to convert it to binary form"<<endl;
    int n;
    cin>>n;
    int A= 0;
    int i=0;
    cout<<"binary repesentation of "<<n<<" is ";
    while(n!=0)
    {
        int digit = n%2;
        n=n/2;
        A =A+(digit*pow(10,i));
        i=i+1;
    }
    cout<<A<<endl;
}
