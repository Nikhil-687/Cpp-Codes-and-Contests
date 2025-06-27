#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n which is to be converted to binary "<<endl;
    cin>>n;
    int A = 0;
    int i=0;
    cout<<"Binary representation of "<<n<<" is: ";
    while (n!=0)
    {
        int bit = (n&1);
        n=n>>1;
        A= A+(bit*pow(10,i));
        i=i+1;
    }
    cout<<A<<endl;
}