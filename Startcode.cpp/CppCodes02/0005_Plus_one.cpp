#include<iostream>
using namespace std;

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  int n;
  cout<<"Enter the number of digits in you'r number"<<endl;
  cin>>n;
  int integer[n];
  int j=0;
  while(j<n){
    cout<<"digit "<<j+1<<" from forward: ";
    cin>>integer[j];
    j++;
  }
  int i=0;
  while(i<n){
    
    if(integer[n-i-1] != 9){
      integer[n-i-1]=integer[n-i-1]+1;
      break;
    }
    else if(i != n-1){
      integer[n-i-1]=0;
      i=i+1;
    }
    else if(integer[0] == 9){
        integer[0]=10;
        break;
    }
   
  }
  cout<<"Plus One to the Number is: ";
  for(int i=0;i<n;i++){
    cout<<integer[i];
  }
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}