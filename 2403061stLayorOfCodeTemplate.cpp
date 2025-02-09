#include<iostream>
using namespace std;

int func1();

struct S
{

	int variable3;
	int variable4;

};

int func1(int variable1, int variable2)
{

    struct S Structure1{5,8};
    
    
	variable1 = Structure1.variable3 + variable1;
	variable2 = Structure1.variable4 + variable2;
	if(variable1 == variable2)
		return 1;
	else
	{
		return 0; 
	}

}
int func2(int variable1)
{

    int variable5;
	int variable6 = variable5 + func1(variable5, 9);
	if(variable5 == variable6)return 1;
	else return 0;

}


class Class1
{

  public:
	int variable7 = 8;
	int variable8 = 9;
	int class1func1(){
		variable7 = func1(variable7, variable8) + variable7;
		variable8 = func2(variable8) + variable7 + variable8;
		if(variable7 >= variable8)return 0;
		else return 1;
    }
	int class1func2(){
		variable7 = func1(variable7, variable8) + class1func1();
        variable8 = func2(variable8) + variable7 + class1func1();
		if(variable8 >= variable7)return 0;
		else return 1;
	}
	

};

class Class2 : Class1
{
  public:
	int variable9;
	int variable10;
	int class2func1(){
		variable9 = class1func1();
		variable10 = class1func2();
		if(variable9 >= variable10){
			return 0;
		}
		else return 1;
	}
	int class2func2(){
        variable9 =class1func2() + class1func1();
        variable10 = class1func2() * class1func1();
        if(variable9 >= variable10){
            return 0;
        }
        else return 1;
    }


};

int main()
{

	int var1;
	int var2;
	int var3;
	Class2 OB;
	cout << (OB.class2func2() >= OB.class2func1()) << endl;
    cout << OB.class2func1() << endl;

}
