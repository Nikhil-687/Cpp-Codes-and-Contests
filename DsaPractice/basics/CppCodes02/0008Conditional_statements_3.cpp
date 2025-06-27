#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  
  int age;
  cin>>age;
  if(age < 18 && age > 0){
    cout<<"Young";
  }
  else if(age > 18 && age < 55){
    cout<<"Not Young";
  }
  else if(age > 55 && age<150){
    cout<<"Aged";
  }
  else if(age < 0){
    cout<<"Age canot exist";
  }
  else {
    cout<<"Age may not exist "<<endl<<"If you'r sure the they are super aged";
  }

  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;
  return 0;
}