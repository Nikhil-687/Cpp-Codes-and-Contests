#include <iostream>
using namespace std;

int main()
{

    cout<<endl<<"finding quotient and reminder"<<endl;
    int divident;
    int divisor;
    int quotient;
    int reminder; 
    cout<<"enter the value of divident and divisor just a space after"<<endl;  
    cin>>divident>>divisor;
    quotient = divident/divisor;
    cout<<"quotient:- "<<"when "<<divident<<" is divided by "<<divisor<<" quotient obtained is ["<<quotient<<"]"<<endl;
    reminder=divident -(divisor*quotient);
    cout<<"reminder:- "<<"when "<<divident<<" is divided by "<<divisor<<" Reminder obtained is ["<<reminder<<"]"<<endl;

}