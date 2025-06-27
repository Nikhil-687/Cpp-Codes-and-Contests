#include <iostream>
using namespace std;
int main()
{

    //a perfect number is equal to sum of all of its positive divisors
    int N;
    cout << "enter the number to check number is perfect or not ?"<<endl;
    cin>>N;
    int i=1;
    int digit =0;
    while(N>i){
        if(N%i == 0)
        {

            digit =digit+i;
            

        }
        i=i+1;
    }
    if(N==digit){
        cout<<N<<" is a Perfect number"<<endl;
    }
    else{
        cout<<N<<" is Not a Perfect number"<<endl;
    }

}