#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void fun() { cout << "Base" << endl; }
};

// Parent classes with virtual inheritance
class Parent1 : virtual public Base {
    public:
    void fun() override {
        cout << "Parent1\n";
    }
};
class Parent2 : virtual public Base {};

// Child class
class Child : public Parent1, public Parent2 {};

int main() {
    Child obj;
    obj.Parent2::fun();   // No ambiguity
    return 0;
}