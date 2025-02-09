#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;
    public: 
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }
        Complex operator+(Complex x){
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
        friend Complex operator-(Complex c1,Complex c2);
        void display(){
            cout << real << " + "<< img << "i \n";
        }
        friend ostream& operator<<(ostream &o, Complex c1);
        friend istream& operator>>(istream &i, Complex &c1);
};
ostream & operator<<(ostream &o, Complex c1){
    o << c1.real << " + " << c1.img << "i \n";
    return o;
}
istream& operator>>(istream &i, Complex &c1){
    cout << "Enter the real and imaginary part: ";
    i >> c1.real >> c1.img;
    return i;
}
Complex operator-(Complex c1,Complex c2){
            Complex temp;
            temp.real = c1.real - c2.real;
            temp.img = c1.img - c2.img;
            return temp;
        }

int main(){
    Complex c1(1,2);
    Complex c2(2,3);
    Complex c3 = c1-c2;
    Complex c4 = c1+c2;
    c3.display();
    cout << "Complex no. 4 is: " << c4;
    Complex c5, c6;
    cout << "Enter Complex no. as follow.\n";
    cin >> c5 >> c6;
    cout << "Complex no. 5 is: " << c5 << "Complex no. 6 is: " << c6;
}