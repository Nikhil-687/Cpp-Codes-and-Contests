#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a most loved number of yours to get divisors of it "<<endl;
    cin>>n;
    int i=2;
    cout<<"Divisors of "<<n<<" are : "<<"1";
    while(i<n){
        if(n%i==0){
            cout<<" ,"<<i;
        }
        i=i+1;
    }
    cout<<"/- only"<<endl;
}