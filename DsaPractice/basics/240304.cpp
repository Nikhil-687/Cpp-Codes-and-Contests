#include<iostream>
#include<string>
#include<vector>
using namespace std;

//int specific functions and classes

int Function1(int i = 1);

struct Struct1
{
   /* data */
   int variable1;
   int variable2 = Function1(variable1);
};

int Function1(int i = 1)
{

   struct Struct1 Structobject1;
   int x = Structobject1.variable1;
   
   return i+x;

};

class Class1
{

public:

   int variable3, variable4;
   

   

};



