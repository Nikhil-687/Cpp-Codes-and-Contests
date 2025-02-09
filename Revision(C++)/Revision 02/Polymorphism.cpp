#include<bits/stdc++.h>

class Base
{
    public:
        // virtual function
        virtual int BaseFun(){std::cout << "Base Class Function\n";return 0;}
};

            
class Derived:public Base{public:int DerivedFun(){std::cout << "Derived Class Function\n";return 0;}int BaseFun(){std::cout << "Overided Base Class Function\n";return 0;}};


//Student Exercise
class Shape{
    public:
        int length = 0, breadth = 0;
        virtual int perimeter() = 0; 
        virtual int area() = 0; 
};
class Square:public Shape{
    public:
        Square(int a){length = a;breadth = a;}
        int perimeter(){return 4*(length);} 
        int area(){return length*length;} 
};
class Circle:public Shape{
    public:
        Circle(int a){length = a;breadth = 0;}
        int perimeter(){return 2*3.14*length;} 
        int area(){return 3.14*length*length;} 
};





int main(){
    Base *d = new Derived;
    // d->DerivedFun();
    d->BaseFun();

    Shape *s = new Square(5);
    std :: cout << s->area() << "\n";
    std :: cout << s->perimeter() << "\n";
    s = new Circle(3);
    std :: cout << s->area() << "\n";
    std :: cout << s->perimeter() << "\n";
    return 0;
}