#include<iostream>
using namespace std;

int main()
{
  string note_book;
  cout<<"Enter a name for you'r Note Book: "<<endl;
  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  
  cout<<"                                             *"<<endl<<endl;
  cin>>note_book;
  string a;
  int i=0;
  int j=1;
  string name;
  cout<<"Enter You'r Name: ";
  cin>>name;
  string age;
  cout<<"Enter you'r Age: ";
  cin>>age;
  string branch;
  cout<<"Enter you'r Branch: ";
  cin>>branch;
  string from;
  cout<<"you are from (district,state):  ";
  cin>>from;
  while(i<j){
    cin>>a;
    cout<<endl;
    if(a == "end"){
      cout<<"                                           :Thank You"<<endl;
      i=i+1;
    }
  }
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                        "<<name<<endl;
  cout<<"                                                                        "<<age<<" old"<<endl;
  cout<<"                                                                        "<<branch<<endl;
  cout<<"                                                                        From: "<<from<<endl;

}