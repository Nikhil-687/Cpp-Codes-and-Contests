#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int A;
    cout<<"Enter a number"<<endl;
    cin>>A;
    int c=A;
    int B=0;
    while (A>0)
    {

        int digit=A%10;
        B=B*10+digit;
        A=A/10;

    }
    cout<<"Reverse of the number "<<c<<" is "<<B<<endl;
    

}