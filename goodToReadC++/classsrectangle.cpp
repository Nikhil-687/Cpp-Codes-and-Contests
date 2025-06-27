#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
   private:
      int length, breadth;
   public:
      Rectangle(int l = 0, int b = 0){
         setLength(l);
         setBreadth(b);
      }
      Rectangle(Rectangle &r){
         setLength(r.getLength());
         setBreadth(r.getBreadth());
      }
      void setLength(int l){
         if(l >= 0){length = l;}
         else{
            cout << "Length can't be negative\n";
            length = 0;
         }
      }
      void setBreadth(int b){
         if(b >= 0){breadth = b;}
         else{
            cout << "Breadth can't be negative\n";
            breadth = 0;
         }
      }
      int getLength(){
         return length;
      }
      int getBreadth(){
         return breadth;
      }
      int area(), perimeter();
};
int Rectangle::area(){
   return length*breadth;
}
int Rectangle::perimeter(){
   return (length+breadth)*2;
}


class Cuboid:public Rectangle
{
   int height = 0;
   public:
      // Cuboid(int l = 0, int b = 0, int h = 0){
      //    setLength(l);
      //    setBreadth(b);
      //    setHeight(h);
      // }
      Cuboid(int l = 0, int b = 0, int h = 0):Rectangle(l, b){
         setHeight(h);
      }
      int getHeight(){
         return height;
      }
      void setHeight(int x){
         if(x >= 0)height = x;
      }
      int volume(){
         return ((area())*height);
      }
      friend ostream& operator<<(ostream& o, Cuboid c){
         o <<  "Volume is: " << c.volume() << ", Lenngth is: " << c.getLength() << " ,Breadth is: " << c.getBreadth() << " ,Height is: " << c.getHeight() << endl;
         return o;
      }

      
};          
int main(){
   // Basic Object Creation
   Rectangle r1, r2;
   r1.setBreadth(5);
   r1.setLength(20);
   r2.setBreadth(15);
   r2.setLength(25);
   cout << "Rectangle 1\n";
   cout << "   Area is: " << r1.area() << ", Perimeter is: " << r1.perimeter() << ", Length is: " << r1.getLength() << ", Breadth is: " << r1.getBreadth() << endl;
   cout << "Rectangle 2\n";
   cout << "   Area is: " << r2.area() << ", Perimeter 7is: " << r2.perimeter() << ", Length is: " << r2.getLength() << ", Breadth is: " << r2.getBreadth() << endl;
   
   


   // Object Created in Heap
   Rectangle *p = new Rectangle;
   p->setLength(6);
   p->setBreadth(16);
   cout << "Rectangle 3\n";
   cout << "   Area is: " << p->area() << ", Perimeter is: " << p->perimeter() << ", Length is: " << p->getLength() << ", Breadth is: " << p->getBreadth() << endl;
   Rectangle *q = new Rectangle();
   q->setBreadth(19);
   q->setLength(9);
   cout << "Rectangle 4\n";
   cout << "   Area is: " << q->area() << ", Perimeter is: " << q->perimeter() << ", Length is: " << q->getLength() << ", Breadth is: " << q->getBreadth() << endl;
   


   
   //Object Created using Perameteric Constructor
   Rectangle r5(5, 10);
   cout << "Rectangle 5\n";
   cout << "   Area is: " << r5.area() << ", Perimeter is: " << r5.perimeter() << ", Length is: " << r5.getLength() << ", Breadth is: " << r5.getBreadth() << endl;
   
   

   //Object Constructed using Copy Constructor
   Rectangle r6(*q);
   cout << "Rectangle 6\n";
   cout << "   Area is: " << r6.area() << ", Perimeter is: " << r6.perimeter() << ", Length is: " << r6.getLength() << ", Breadth is: " << r6.getBreadth() << endl;
   Cuboid c1(3, 4, 5);




   // Cuboid Class inherited from class Rectangle
   cout << "Cuboid 1\n";
   cout << "   Volume is: " << c1.volume() << ", Lenngth is: " << c1.getLength() << " ,Breadth is: " << c1.getBreadth() << " ,Height is: " << c1.getHeight() << endl; 



   // Cuboid class object Created using Constructor
   // Outputing Cuboid with Operator Overloading
   Cuboid c2(5, 10, 15);
   cout << "Cuboid 2\n";
   cout << "   " << c2;
   Cuboid c3(4, 5, 6);
   cout << "Cuboid 3\n";
   cout << "   " << c3;


   // Rectangle class object creaded.
   Rectangle *r = new Cuboid;
   cout << typeid(r).name();
 
}