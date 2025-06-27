#include<iostream>
//#include<new>
using namespace std;

class Powers
{
    int x;
public:
    Powers(){x = 0;};
    Powers(int n){x = n;};
    int getx(){return x;}
    void setx(int i){x = i;}
};



int main ()
{
    class Powers oftwo[] = {1,4,9,16,25};
    class Powers ofthree[5];

    //powers of two
    cout << "\nPowers of two" << endl;
    for(int i = 0;i < 5;i++){
        cout << "power of " << i+1 << " raise to 2 is: " << oftwo[i].getx() << endl;
    }

    ofthree[0].setx(1);
    ofthree[1].setx(8);
    ofthree[2].setx(27);
    ofthree[3].setx(64);
    ofthree[4].setx(125);

    //power of 3
    cout << "\n\npowers of three\n";
    for(int i = 0;i < 5;i++){
        cout << "power of " << i+1 << " raise to 3 is: " << ofthree[i].getx() << endl;
    }
    cout << "\n\n";

    //dynamicaly allocate an array
    Powers *p;
    try{
        p = new Powers[5];

    }catch(bad_alloc xa){
        cout << "Allocation fails\n";
        return 1;
    }
    for(int i = 0;i < 5;i++){
        p[i].setx(oftwo[i].getx());
    }
    cout << "Powers of two dynamically allocated \n";
    for(int i = 0;i < 5;i++){
        cout << "power of " << i+1 << " raise to 2 is: " << p[i].getx() << endl;
    }
    cout << "\n\n";

    delete []p;
    return 0;

}