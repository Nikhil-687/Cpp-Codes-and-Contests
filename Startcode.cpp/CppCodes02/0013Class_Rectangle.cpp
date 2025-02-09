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
int main(){
  Rectangle r1;
  r1.length=10;
  cout<<"Enter breadth of the rectangle ";
  cin>>r1.breadth;
  cout<<r1.area();
  cout<<r1.perimeter();
}