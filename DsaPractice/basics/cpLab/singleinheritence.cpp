#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int a = 5;
    protected:
        int b = 4;
    public: 
        int c = 3;
};
class B: public A
{
    private:
        int a2 = 6;
    protected:
        int b2 = 7;
    public: 
        int c2 = 8;
        void displayProtectedAndPrivate(){
            cout << "Protected: "<< b << " " << b2 << endl;
            cout << "Private: " << a2 << endl;
        }
};


int main()
{

    /*code*/
    class B inherited;
    cout << "Public: " << inherited.c << " " << inherited.c2 << endl;
    inherited.displayProtectedAndPrivate();


    return 0;

}