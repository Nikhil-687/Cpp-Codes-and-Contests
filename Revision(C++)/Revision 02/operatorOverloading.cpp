// #include <bits/stdc++.h>

// class Complex
// {
// private:
//     int real;
//     int img; // x+iy
// public:
//     Complex()
//     {
//         real = 0;
//         img = 0;
//     }
//     Complex(int a, int b)
//     {
//         setReal(a);
//         setImg(b);
//     }
//     Complex(Complex &r)
//     {
//         setReal(r.getReal());
//         setImg(r.getImg());
//     }
//     void setReal(int x)
//     {
//         real = x;
//     }
//     void setImg(int x)
//     {
//         img = x;
//     }
//     int getReal() { return real; }
//     int getImg() { return img; }
//     bool isReal()
//     {
//         if (img == 0)
//             return true;
//         return false;
//     }
//     bool isImaginary()
//     {
//         if (real == 0)
//             return true;
//         return false;
//     }
//     ~Complex()
//     {
//         std::cout << "Complex is Distroyed\n";
//     }

//     // Operator Overloading
//     Complex operator+(Complex C){
//         Complex C2;
//         C2.setReal(getReal()+C.getReal());
//         C2.setImg(getImg()+C.getImg());
//         return C2;
//     }

//     friend std::ostream & operator<<(std::ostream & os, Complex C);
// };

// std::ostream & operator<<(std::ostream & os, Complex C){
//     os << C.getReal() << " + (" << C.getImg() << ")i\n";
//     return os;
// }

// int main()
// {

//     /*code*/
//     Complex C1 = Complex(3,4);
//     Complex C2 = Complex(3,4);
//     Complex C3 = C1+C2;
//     std:: cout << (C3).getReal() << " + " << (C3).getImg() << "i" << std::endl;
//     std::cout << C3;
//     return 0;
// }

#include <bits/stdc++.h>

class Rational
{

private:
    int p, q;

public:
    Rational()
    {
        p = 0;
        q = 0;
    }
    Rational(int a, int b)
    {
        setP(a);
        setQ(b);
    }
    Rational(Rational &r)
    {
        setP(r.getP());
        setQ(r.getQ());
    }
    void setP(int x)
    {
        p = x;
    }
    void setQ(int x)
    {
        q = x;
    }
    int getP() { return p; }
    int getQ() { return q; }
    Rational operator+(Rational r){
        Rational r2;
        r2.setP((getP() * r.getQ()) + (getQ() * r.getP()));
        r2.setQ(getQ() * r.getQ());
        return r2;
    }
    friend std::ostream & operator<<(std::ostream & os, Rational r){
        os << "(" << r.getP() << ")/(" << r.getQ() << ")\n";
        return os;
    }
};

// std::ostream & operator<<(std::ostream & os){
        // os << "(" << getP() << ")/(" << getQ() << ")\n";
        // return os;
//     }



int main(){
    Rational r1(2, 4);
    Rational r2(4, 2);
    Rational r3 = r1+r2;
    std:: cout << r3;
    Rational r4(-5,3);
    std::cout << r4;

}