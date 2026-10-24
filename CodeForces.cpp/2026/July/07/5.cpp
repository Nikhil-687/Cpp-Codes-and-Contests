#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    int age;

public:
    // Constructor 1: delegates to Constructor 2
    Student(string n) : Student(n, 18) {
        // age defaults to 18
    }

    // Constructor 2: the "target" constructor
    Student(string n, int a) : name(n), age(a) {
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Token{
public:
    bool isOperation;
    int value;
    char operation;
    Token(int val){
        isOperation = false;
        value = val;
    }
};
class modernToken : public Token{
public:
    modernToken(char op) : Token(0){
        isOperation = true;
        operation = op;
    }
};

int main(){
    int x = 5;
    int y = 10;
    int z = x + y;
    long long int a = 100;
    Token *t = new Token(5);
    modernToken *mt = new modernToken('+');
    if(z > 10){
        x -= 10;
        while(x < 0){
            x++;
            continue;
        }
        for(int i = 0; i < 5; i++){
            x += i;
            break;
        }
        z = x + y;
        while(a){
            a--;
        }
        int b = sizeof(modernToken);
        goto X;
    }
    X:;
    Student s1("Alice");
    s1.display();
    return 0;
}