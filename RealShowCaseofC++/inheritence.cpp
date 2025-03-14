#include<bits/stdc++.h>


// IsA hasA
    class Base
    {

        private:
            int a = 5;
        protected:
            int b = 5;
        public:
            Base(){
                std::cout << "Default of Base\n";
            }
            Base(int x){
                std::cout << "Param of Base, " << x << std::endl;
            }
            int c = 5;

    };



    class isABase:public Base
    {

        private:
            int x1 = b+1;
            int x2 = c+1;
        protected:
            int x3 = b+1;
            int x4 = c+1;
        public:
            int x5 = b+1;
            int x6 = c+1;

    };
    class hasABase
    {

        private:
            Base B;
            int x1 = B.c;
        protected:
            int x2 = B.c;
        public:
            int x3 = B.c;
            


    };


// Constructors in Inheritence
class Derived:public Base
{
    public:
        Derived(){
            std::cout << "Default Constructor of Derived\n";
        }
        // Derived(int x){
        //     std::cout << "Param Constructor of Derived, " << x << std::endl;
        // }
        Derived(int x):Base(x)
        {
            std::cout << "Param Constructor of Derived, " << x << std::endl;
        }

};


//ways of Inheritence
class Derived2:public Base{
    // protected -> protected
    // public -> public
};
class Derived3:protected Base{
    // protected, public -> both to protected
};
class Derived4:private Base{
    // protected, public -> both to private 
};


//student exercise ( Employee class )
class Employee
{

    private:
        std::string Name;
        int age;
    public:
        Employee(std::string Name="Guest",int age = 30)
        {
            this->Name = Name;
            this->age = age;
        }
};


class FullTime:public Employee{
    int salary = 100000;
    public:
        FullTime(std::string Name="Guest",int age = 30,int sal = 100000):Employee(Name,age){
            salary = sal;
        }
        int getsalary(){
            return salary;
        }
};
class PartTime:public Employee{
    int salary = 30000;
    public:
        PartTime(std::string Name="Guest",int age = 30,int sal = 30000):Employee(Name,age){
            salary = sal;
        }
        int getsalary(){
            return salary;
        }
};



int main()
{

    /*code*/
    FullTime nik("Nikhil",18,75000);
    PartTime Tanay("Tanay",18,50000);
    std:: cout << nik.getsalary() << std::endl;
    std:: cout << Tanay.getsalary() << std::endl;

    return 0;

}