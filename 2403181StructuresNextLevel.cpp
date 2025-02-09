#include <iostream>
using namespace std;

int fun(int a, int *b);

struct sample1{
    int a1 = 1, b1 = 2, c1 = 3 * a1;
};

class Sample
{

    public:
        int a = 1;
        struct sample1 s;
        int method(int v){
            return v*v + fun(s.b1, &a);
        }

};


int fun(int a, int *b){
    struct sample1 s;
    int f = s.a1;
    class Sample obj;
    int g = obj.a + obj.s.a1  ;
    return a+(*b) + f + g ;
}
struct sample2{
    int a2 = 1, b2 = 2, c2 = fun (a2,&b2);
    struct sample1 s;
    class Sample ob;
    int c = ob.a + ob.method(ob.a);
    
    struct sample3{
        struct sample1 s2;
        struct sample4{
            int a4, b4 = 8, c4;
            int func(int a , int b, int c){
                return a+b+c;
            }

        };
        struct sample4 s4;
        int a3, b3 = s4.func(s2.a1, s2.b1, s2.c1), c3 = 4;

    };
    struct sample3 S;
    int x = ++s.a1 + (++S.c3) + (--S.b3) + c;
    
};

int main(){
    struct sample2 s;
    struct sample2::sample3::sample4 s4;
    int y = ++s.x + s4.func(++s4.b4, ++s4.c4, ++s4.b4);
    cout << "Code Strength: " << (++y)+1 << endl;
}