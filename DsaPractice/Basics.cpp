#include<bits/stdc++.h>

int main(){
    // Hello World;
    std::cout << "Hello World\n";
    
    // Area of Triangle
    int l, b;
    std::cin >> l >> b;
    std::cout << 0.5*l*b << std::endl;
    
    // Sum of first N natural numbers
    int n;
    std::cin >> n;
    std::cout << (n*(n+1))/2 << std::endl;
    
    // Roots of Quadratic eqn
    int a, b2, c;
    std:: cin >> a >> b2 >> c;
    int r1 = (-b+pow((b2*b2-4*a*c),0.5))/2*a;
    int r2 = (-b-pow((b2*b2-4*a*c),0.5))/2*a;
    std:: cout << r1 << " " << r2 << std::endl;

    // Area of Circle
    int r;
    std::cin >> r;
    std::cout << 3.14*r*r << std::endl;

    // Operators
    a++;
    a--;
    a+=b;
    a-=b;
    a*=b;
    a/=b;
    a+=5;
    std::cout << a << std::endl;

    // Overflowchar 
    char a2=128; 
    std::cout<<(int)a2<<std::endl;
    char b3=127; 
    b3++; 
    std::cout<<(int)b3<<std::endl;
    char c2=-128;
    std::cout<<(int)c2<<std::endl;
    char d2=-128; 
    d2--; 
    std::cout<<(int)d2<<std::endl;
    int e = INT8_MAX; 
    e+=4;
    std::cout<<(int)e<<std::endl;
    // increases value to 131 because int is of 4 bytes and we assinged it max of i byte 
    //that is we assigned 11111111 but it is 00000000 00000000 00000000 11111111
    
    // Bitwise operations
    // &, |, ^:Xor, ~:Not, <<, >> 
    int a3 = 5;
    int c3 = 7;
    std::cout << (a3 & c3) << " " << (a3 | c3) << " " << (a3 ^ c3) << " " << (~a3) << std:: endl;
    return 0;

}/*4 5
5
5 -34 6
4
*/