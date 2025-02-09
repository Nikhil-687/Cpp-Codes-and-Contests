#include<iostream>
using namespace std;


int function();

class Pointers;

int pointer();

struct x{
    struct xyz{};
};

struct pointer
{

    int a = 1;
    int *p1 = &a;
    int *dynamic = new int(2);

};
//no error in rediclaration of a class , function ;
//but it is with struct, for. eg - now(struct pointer{...};) will give you error.
class Pointers{
    int x = 1;
    public:
    int method(){
        return 1;
    }
    class Pointers2{
        struct x{
            struct xyz{
                int n = 0;  
            };
        };
    };
};

int main ()
{


    struct pointer p;
    class Pointers p2;
    x x2;
    x :: xyz xyz2;
    Pointers::Pointers2 q;

    Pointers * ptrp2 = &p2;
    Pointers * ptrp22 = new Pointers (p2);
    Pointers ** ptrptrp22 = &ptrp2;
    struct pointer * ptr = &p;
    x *ptrx = &x2;
    x::xyz *ptrxyz2 = &xyz2;
    p2.method();
    int i;
    Pointers::Pointers2 pointersP2;
    Pointers::Pointers2 *ptrpointersP2 = &pointersP2;
    Pointers ** ptrptrp2 = new Pointers *(ptrp22);
    Pointers::Pointers2 **ptrptrpointersp2 = &ptrpointersP2;
    
    x::xyz ** ptrptrxyz2 = &ptrxyz2;
    x ** dynamicvar = new x * (ptrx);

    //output dynamic value of variable not seperately definrd in main and in struct
    cout << *dynamicvar << " " << *(p.dynamic) << endl;
    cout << "Code Strength: " ;

}