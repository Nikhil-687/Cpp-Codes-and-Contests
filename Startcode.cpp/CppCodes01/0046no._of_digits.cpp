#include<iostream>
using namespace std;
int main()
{
    
    double N;
    cout<<"Enter one of your favourite Integer "<<endl;
    cin>>N;
    int count1 = 0;
    while(N>=1)
    {
        count1 = count1 +1;
        N=N/10;
    }
    cout<<"Entered number contains "<<count1<<" digits or we can say "<<endl<<count1<<" digit before decimal"<<endl;

}