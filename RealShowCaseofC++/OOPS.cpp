// Class is a blue print of an object
// Class in a group of objects
// Class is a design of object
// Many object can be created from same class
// Object consumes memory equal to sum of sizes of all data members
// Member functions don’t occupy memory
// Member functions are called depending on object
// . Dot operator is used for accessing members of object
// Memory allocated for object is also called as instance

// Abstraction
// Data-Hiding
// Inheritence
// Polymorphism

#include <bits/stdc++.h>

// First Class
class Rectangle
{
    int length, breadth;

public:
    // Constructors
    // default constructor
    // nonparameterised constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    // nonparameterised constructor
    Rectangle(int a, int b)
    {
        setLength(a);
        setBreadth(b);
    }
    // copy constructor
    Rectangle(Rectangle &r)
    {
        setLength(r.getLength());
        setBreadth(r.getBreadth());
    }

    // Set, Get methods
    void setLength(int x)
    {
        if (x < 0)
            std::cout << "Length Can't be negative\n";
        length = x;
    }
    void setBreadth(int x)
    {
        if (x < 0)
            std::cout << "Length Can't be negative\n";
        breadth = x;
    }
    int getLength() { return length; }
    int getBreadth() { return breadth; }

    // enquiery
    bool isSquare()
    {
        if (length == breadth)
            return true;
        return false;
    }

    // other methods/Facilators
    int area() { return length * breadth; };
    int perimeter() { return 2 * (length + breadth); }

    // Distructor
    ~Rectangle()
    {
        std::cout << "Rectangle is Distroyed\n";
    }


    //Inline and non inline functions
    void fun1(){}
    void fun2();
    inline void fun3(){}
    inline void fun4();

    //Only fun2 is non inline all the rest are inline functions


    //struct vs Classes 

};

struct test {
    private:
        int s = 5;
    public:
        void display(){
            std::cout << s << std::endl;
        }
};

///////the only difference between struct of c++ and classeses struct has default asses modifier as public
///////where it is private in class

void Rectangle::fun2(){}
void Rectangle::fun4(){}



int main()
{

    /*code*/
    Rectangle r1;
    r1.setLength(5);
    r1.setBreadth(10);
    std::cout << std::endl
              << "Length:    " << r1.getLength() << std::endl;
    std::cout << "Breadth:   " << r1.getBreadth() << std::endl;
    std::cout << "Perimeter: " << r1.perimeter() << std::endl;
    std::cout << "Area:      " << r1.area() << std::endl;
    Rectangle *p = &r1;
    ((*p).setBreadth(5));
    p->setLength(20);
    std::cout << std::endl
              << "Length:    " << r1.getLength() << std::endl;
    std::cout << "Breadth:   " << r1.getBreadth() << std::endl;
    std::cout << "Perimeter: " << r1.perimeter() << std::endl;
    std::cout << "Area:      " << r1.area() << std::endl;

    Rectangle *r2 = new Rectangle;
    r2->setLength(10);
    r2->setBreadth(20);
    std::cout << std::endl
              << "Length:    " << r2->getLength() << std::endl;
    std::cout << "Breadth:   " << r2->getBreadth() << std::endl;
    std::cout << "Perimeter: " << r2->perimeter() << std::endl;
    std::cout << "Area:      " << r2->area() << std::endl;

    // Rectangle r3 = Rectangle(5, 10);
    // std::cout << std::endl
    //           << "Length:    " << r3.getLength() << std::endl;
    // std::cout << "Breadth:   " << r3.getBreadth() << std::endl;
    // std::cout << "Perimeter: " << r3.perimeter() << std::endl;
    // std::cout << "Area:      " << r3.area() << std::endl;

    Rectangle r4 = Rectangle(*r2);//Rectangle r4 = Rectangle(r3);
    std::cout << std::endl
              << "Length:    " << r4.getLength() << std::endl;
    std::cout << "Breadth:   " << r4.getBreadth() << std::endl;
    std::cout << "Perimeter: " << r4.perimeter() << std::endl;
    std::cout << "Area:      " << r4.area() << std::endl;

    test t;
    t.display();

    return 0;
}