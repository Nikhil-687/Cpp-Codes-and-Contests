#include<iostream>
using namespace std;
int main()
{

    int year_number;
    cout<<"Enter a year"<<endl;
    cin>>year_number;
    if(year_number%4==0){
        cout<<"The year "<<year_number<<" is a Leap year"<<endl;
    }
    else{
        cout<<"The year "<<year_number<<" is Not a Leap year"<<endl;
    }

}
