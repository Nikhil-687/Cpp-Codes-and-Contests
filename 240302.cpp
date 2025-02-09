#include <iostream>
using namespace std;

int funcModify(int a){
    a++;
    cout << a <<endl;
    return 54;
}

int main()
{

    int p = 2;
    int q = p;
    funcModify(q);
    int x = funcModify(q);
    return 0;
    
}