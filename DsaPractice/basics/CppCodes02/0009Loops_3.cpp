#include<iostream>
using namespace std;

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  
  int n;
  cout <<"Enter a Natural number"<<endl;
  cin>>n;

  int j=1;
  int i=1;
  while (j<n){
    for( ; i<n;i++){
      if(n%i ==0){
        cout<<j<<") Foactor of the number "<<n<<" is: "<<i<<endl;
        j++;
      }
      if (i==n){
        j=n;
        i=i+n;
        break;
      }
    }
  }
  
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}