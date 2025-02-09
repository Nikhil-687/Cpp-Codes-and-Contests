#include<iostream>
using namespace std;

int maximum(int x,int y,int z){
  if(x>y && x>z){
    return x;
  }
  else if(z>y){
    return z;
  }
  else{
    return y;
  }
}

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  
  cout<<maximum(4,5,9);
  
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}