#include <bits/stdc++.h>

void display(){
    std::cout << "HEllo\n";
}
void count(int a){
    std::cout << a << std::endl;
}

int main()
{

    /*code*/
    // Pointer is address variable
    // It can store the address of data
    // Pointer are used for accessing heap memory
    // 5 Arithmetic operations are allowed pointer
    //   p++ - move pointer to next element
    //   p - - move pointer to previous element
    //   p+k  gives address of kth element form pointer location to right
    //   p-k  gives address of kth element from pointer location to left
    //   q-p  gives number of elements between 2 pointers p and q
    // Pointers can be of many levels
    // Double pointer is used for accessing 2D array

    // Basics
    int a = 10;
    int *p2 = &a;

    std::cout << a << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << &a << std::endl;
    std::cout << p2 << std::endl;

    // array in heap
    int *p3 = new int[5];
    p3[2] = 2229;

    // Arithmatic Operations
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A, *q = &A[4];
    std::cout << *p << std::endl;
    std::cout << std::endl;
    p++;
    std::cout << *p << std::endl;
    std::cout << std::endl;
    p--;
    std::cout << *p << std::endl;
    std::cout <<std:: endl;
    std::cout << p << std::endl;
    std::cout << p + 2 << std::endl;
    std::cout << std::endl;
    std::cout << *p << std::endl;
    std::cout << *(p + 2) << std::endl;
    std::cout << std::endl;
    std::cout << q - p << std::endl;
    std::cout << p - q << std::endl;

    // Reference is a Alias of variable
    //It must be initialised when declared
    //It doesn’t take any memory
    //It cannot be modified to refer other variable
    //Syntax for reference declaration is 
    //Int &y=x;

    //
    int x = 7;
    int &y = x;
    int x2 = 3;
    // &y = x2; This is because we cant rereference to some other variable
    // int &y2; Here it says to allocate the refernce at the time of initialisation
    int &y2 = x;
    std:: cout << x << std::endl;
    std:: cout << y << std::endl;
    std:: cout << y2 << std::endl;


    // Pointer to a function
    void (*fp)() = display;
    void (*fp4)(int) = count;
    void (*fp5)(int) = count;
    void (*fp2)();
    void (*fp3)() = fp;
    fp2 = display;
    (*fp2)();
    (*fp)();
    (*fp)();//if we remove this semicolon it trys stick to next line which gives error in this case
    (*fp3)();
    (*fp4)(x);
    
    return 0;
}