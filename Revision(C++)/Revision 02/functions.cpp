// Function is a module which performs a specific task
// Functions are called by name
// Rules for giving function name is same as variable name
// Function can take 0 or more parameters
// Function can return single value
// Void function don’t return any value
// Default return type is int

#include <bits/stdc++.h>

// example function
void display()
{
    std::cout << "Hello" << std::endl;
}

// example function with arguments and return value
float add(float a, float b)
{
    return a + b;
}

// finding Maxof 3 numbers
float max3(float a, float b, float c)
{
    return (a > b) ? (a > c) ? a : c : (b > c) ? b
                                               : c;
}

// function overloading
float add(float a, float b, float c)
{
    return a + b + c;
}

// Template function
template <class T>
T max(T a, T b)
{
    return a;
}

// default arguments
template <class T>
T add(T a = 0, T b = 0, T c = 0, T d = 0)
{
    return a + b + c + d;
}
/*
// pass by value
template <class T>
void swap(T a, T b){
    T x = a;
    a = b;
    b = x;
} */

// pass by address
template <class T>
void swap(T *a, T *b)
{
    T x = *a;
    *a = *b;
    *b = x;
}
/*
// pass by Reference
template <class T>
void swap(T &a, T &b){
    T x = a;
    a = b;
    b = x;
}
*/

// // Return by address
// template <class T>
// T makeArray(T a, int size)
// {
//     T p = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         p[i] = i;
//     }
//     return p;
// }

//Returnby reference
int & fun(int & a){
    std::cout << a << std::endl;
    return a;
}

//Static Vs Global
int b = 5;
void fun2(){
    static int a = 5;
    a++;
    b++;
    std::cout << a << std ::endl;
}
void fun1(){
    b++;
    //a++
}

//recursive Function
int fact(int n){
    int prod = 1;
    if(n == 1)return 1;
    prod = n * fact(n-1);
    return prod;
}

//student exercise
//linear search
int lsearch(int *p,int key){
    int i = 0;
    while(p[i] != 0){
        if(p[i] == key)return i;
        i++;
    }
    std:: cout << key << " is not Present in the array\n";
    exit(0);
}

int main()
{

    /*code*/
    display();
    std::cout << add(3.3, 4) << std::endl;
    std::cout << add(3.3, 4.2, 5.98) << std::endl;
    std::cout << max3(3.3, 4.2, 5.98) << std::endl;
    std::cout << max(4.7f, 6.7f) << std::endl;
    std::cout << add(3.3, 4.2, 5.3, 5.98) << std::endl;
    int a = 5, b = 3;
    swap(&a, &b);
    std::cout << a << " " << b << std::endl;
    // int *p = makeArray(p1, 4);
    // for (int i = 0; p[i] != 0; i++)
    // {
    //     std::cout << i + 1 << " ";
    // }

    // return by refrence
    {
        int x = 5;
        int y = fun(x);
        std::cout << y+10 << std:: endl;
        int z;
        z = 25;
        fun(x) = z;
        std:: cout << x << std::endl;
    }
    fun1();fun2();(::b)++;
    std::cout << ::b << std::endl;//::s cant be accesed it can only be assecd by fun2
    // a is modified only by fun2 but b is modified by fun1, fun2, main all;

    std:: cout << fact(5) << std::endl;

    int A[5] = {2,3,4,5,6};
    std::cout << "index: " << lsearch(A,3) <<std::endl;
    std::cout << "index: " << lsearch(A,2) <<std::endl;
    std::cout << "index: " << lsearch(A,6) <<std::endl;

    return 0;
}