#include<iostream>
using namespace std;

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  
  int A[5]={2,4,6,8,10};
  int *p=A,*q=&A[3];

  cout<<"*p           "<<*p<<endl;
  cout<<endl;

  p++;
  cout<<"p++,*p       "<<*p<<endl<<endl;

  p--;
  cout<<"p--,*p       "<<*p<<endl<<endl;

  cout<<"p,p+2        "<<p<<"  "<<p+2<<endl;
  cout<<endl;

  cout<<"*p,*(p+2)    "<<*p<<endl<<*(p+2)<<endl<<endl;

  cout<<p-q<<endl<<q-p<<endl<<endl;

  
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;
  return 0;

}