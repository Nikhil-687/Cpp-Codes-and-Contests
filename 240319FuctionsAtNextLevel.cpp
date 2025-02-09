#include<iostream>
using namespace std;


int fun(int a, int *b);

struct sample1{
    int a1 = 1, b1 = 2, c1 = 3 * a1;
    struct sample2{
        int a2 = 2,b2 = 3,c2 = 4;
    };
};

class Sample
{

    public:
        int a = 1;
        struct sample1 s;
        struct sample1::sample2 s2;
        int method(int v){
            return v*v + s2.a2 + fun(s.b1, &a);
        }

};

int fun(int a){
    struct sample1 s;
    int f = s.a1;
    class Sample obj;
    int g = obj.a + obj.s.a1  ;
    return a + f + g ;
}
int fun(int a,int b){
    struct sample1 s;
    int f = s.a1;
    class Sample obj;
    int g = obj.a + obj.s.a1  ;
    return a + b + f + g ;
}
int fun(int a, int *b){
    struct sample1 s;
    int f = s.a1;
    class Sample obj;
    int g = obj.a + obj.s.a1  ;
    return a+(*b) + f + g ;
}


int function1(){
    struct sample1 s;

    class Sample c;
    
    int funvar = funvar + fun(s.a1, &(c.a)) + c.method(c.s.b1)+ c.s2.b2;
    return funvar;
}

int main ()
{

    cout << "Code Strength: " << function1() << endl;

}