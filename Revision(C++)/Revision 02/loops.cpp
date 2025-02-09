#include <bits/stdc++.h>

int main()
{

    /*code*/
    // Sum of n numbers
    int n, sum = 0;
    std::cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;

    // Factorial
    int prod = 1;
    for (int i = 2; i <= n; i++)
    {
        prod *= i;
    }
    std::cout << prod << std::endl;

    // Pefect number
    int factsum = 0;
    for(int i = 1;i <= n;i++){
        if(n%i == 0)factsum += i;
    }
    if(factsum == 2*n){std::cout << n << " is a Perfect number\n";}
    else {std::cout << n << " is not a Perfect number\n";}

    // Prime number
    int k = 1;
    for(int i = 1;i <= n;i++){
        if(n%i == 0)k = 0;break;
    }
    if(k == 1){std::cout << n << " is a Prime number\n";}
    else {std::cout << n << " is not a Prime number\n";}

    // Display digits of a number
    int temp = n;
    while(temp){
        std::cout << temp%10 << " ";
        temp = temp/10;
    }
    std:: cout << std::endl;

    // Armstrong Number
    temp = n;
    sum = 0;
    while(temp){
        sum += temp%10 * temp%10 * temp%10;
        temp = temp/10;
    }
    if(sum == n)std::cout << n << " is a Armstrong Number\n";
    else std:: cout << n << " is not a Armstrong number\n";

    //Sum of digits
    temp = n;
    sum = 0;
    while(temp){
        sum += temp%10;
        temp = temp/10;
    }
    std::cout << "Sum of Digits is: " << sum << std::endl;

    //reversr the number
    temp = n;
    sum = 0;
    while(temp){
        sum = sum *10 + temp%10;
        temp = temp/10;
    }
    std::cout << "Reverse of the number is: " << sum << std::endl;

    // GCD 
    int n2;
    std::cin >> n2;
    temp = n;
    while(temp != n2)
    {
        if(temp > n2)temp-=n2;
        else n2-=temp;
    }
    std:: cout << "GCD : " << temp << std::endl;


    //Student Exercise
    //Palindrome or not
    temp = n;
    sum = 0;
    while(temp){
        sum = sum *10 + temp%10;
        temp = temp/10;
    }
    if(sum == n){
        std:: cout << n << " is a Palindrome" << std::endl;
    }
    else{
        std:: cout << n << " is not a Palindrome" << std::endl;
    }

    return 0;
}