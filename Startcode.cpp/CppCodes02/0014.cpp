#include<iostream>
using namespace std;

class Rectangle
{
private:
  /* data */
public:

  int length;
  int breadth;

  int area()
  {
    return length*breadth;
  }
  int perimeter()
  {
    return 2*(length+breadth);
  }

};

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  
  Rectangle r1;
  Rectangle *p;
  p = &r1;
  p->length=10;
  p->breadth=5;
  cout<<p->area();
  
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}