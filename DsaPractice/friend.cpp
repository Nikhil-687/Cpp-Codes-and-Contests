#include<bits/stdc++.h>

class B;

class A
{
        int a = 5;
    public: 
        static int b;
        int getRoll(){
            b++;
            return b;
        }
        static int fun(){
            int a = b;
            return ++a;
        }
        friend int PlusOne();
        friend B;

        int PlusTwo(){
            i.display();
            return ++(++a);
        }

        class C{
            public:
                void display(){
                    std::cout << "Display of Inner Class\n";
                }
        };
        C i;

};

class B
{
    public:
        A a;
        int PlusOne(){return ++(++(++(a.a)));}
        int PlusTwo(){return ++(++(a.a));};
};
int PlusOne(){
    A a;
    return a.a+1;
}


int main(){

    class B b;
    std::cout << b.PlusOne() << std::endl;
    class A a;
    // std::cout << a.PlusOne() << std::endl;
    std::cout << PlusOne() << std::endl;
    a.PlusTwo();
}