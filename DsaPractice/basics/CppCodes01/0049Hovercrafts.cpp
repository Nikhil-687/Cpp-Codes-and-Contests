#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Hovercrafts you sold this mounth"<<endl<<"(Given that you have a maximum of 10 Hovercrafts to sell) = ";
    cin>>n;
    int cost = 21000000;
    int income=n*3000000;
    cout<<"You had a Profit of '"<<income-cost<<"' , else say;"<<endl<<"You had a Loss of '"<<cost-income<<"'"<<endl;
}