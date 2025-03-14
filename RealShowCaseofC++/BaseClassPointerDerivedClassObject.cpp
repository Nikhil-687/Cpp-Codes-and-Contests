#include<bits/stdc++.h>

// Base Class Pointer Derived Class object
class Base
{
    public:
        int BaseFun(){std::cout << "Base Class Function\n";return 0;}
};

            
class Derived:public Base{public:int DerivedFun(){std::cout << "Derived Class Function\n";return 0;}};


int main(){
    Base *d = new Derived;
    // d->DerivedFun();
    d->BaseFun();
    return 0;
}