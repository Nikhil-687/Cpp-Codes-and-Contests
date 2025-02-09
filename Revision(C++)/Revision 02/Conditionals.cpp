#include <bits/stdc++.h>

typedef int marks;

int main()
{

    /*code*/
    // maximum of two numbers
    int a, b;
    std::cin >> a >> b;
    if (a < b)
        std::cout << std::endl << b << std::endl;
    else
        std::cout << std::endl << a << std::endl;

    // Roll number is valid pr not
    int roll;
    std::cin >> roll;
    if (roll > 0)
        std::cout << "Roll number is Valid\n";
    else
        std::cout << "It's a Invalid roll number\n";

    //+ve or neg
    int num;
    std::cin >> num;
    if (num > 0)
        std::cout << "Positive Number\n";
    else
        std::cout << "It is a Negative number\n";

    // division
    int num1, num2;
    std::cin >> num1 >> num2;
    if (num2 == 0)
        std::cout << "Invalid Denominator" << std::endl;
    else
        std ::cout << num1 << "/" << num2 << " = " << num1 / num2 << std::endl;

    // compound conditions
    int age;
    std::cin >> age;
    if (age < 18)
        std::cout << "You are young\n";
    else if (age < 60)
        std::cout << "You are not young\n";
    else
        std::cout << "You are Old\n";

    if (age >= 18 && age <= 25)
        std::cout << "You are eligible\n";
    else
        std::cout << "You are not eligible\n";

    // max of three
    int a2, b2, c2;
    std::cin >> a2 >> b2 >> c2;
    std::cout << (a2 > b2) ? (a2 > c2) ? a2 : c2 : (b2 > c2) ? b2
                                                             : c2;
    /*
    std

    ::

    cout << (a2>b2)?(a2 > c2)?a2:c2:(b2>c2)?b2:c2;
    // this works because c, c++ ignore unwanted spaces
    */

    // Nature of roots
    int p, q, r;
    std::cin >> p >> q >> r;
    int d = q * q - 4 * p * r;
    if (d > 0)
        std::cout << "Equation has two distinct and real solutions\n";
    else if (d == 0)
        std::cout << "Equation has two equal and real solutions\n";
    else if (d < 0)
        std::cout << "Equation has two imaginary solutions\n";

    // Grades
    marks m1, m2, m3, m4, m5;
    std::cin >> m1 >> m2 >> m3 >> m4 >> m5;
    int perc = (m1 + m2 + m3 + m4 + m5) / 5;
    char grade;
    if (perc >= 60)
        grade = 'A';
    else if (perc >= 35)
        grade = 'B';
    else if (perc >= 0)
        grade = 'C';
    else
    {
        std::cout << "Invalid Marks Input\n";
        grade = '\n';
    }
    std ::cout << grade << std::endl;

    //  Day name
    int day;
    std::cin >> day;
X:;
    if (day < 0)
        std::cout << "Invalid Day number\n";
    else if (day == 1)
    {
        std::cout << "Mon\n";
    }
    else if (day == 2)
    {
        std::cout << "Tue\n";
    }
    else if (day == 3)
    {
        std::cout << "Wed\n";
    }
    else if (day == 4)
    {
        std::cout << "Thu\n";
    }
    else if (day == 5)
    {
        std::cout << "Fri\n";
    }
    else if (day == 6)
    {
        std::cout << "Sat\n";
    }
    else if (day == 7)
    {
        std::cout << "Sun\n";
    }
    else
    {
        day = day % 7;
        if (day == 0)
            day = 7;
        goto X;
    }

    // sort Circuit
    a = 5, b = 7;
    int i = 12;
    if (a > b && ++i > b)
    {
    }
    std::cout << i << std::endl;
    if (a > b || ++i > b)
    {
    }
    std::cout << i << std::endl;
    // if it is not nessesory to check second condition step is being skiped,
    // as in first case but in second case we were relaying on the second condition

    // dynamic alloc
    if (int e = a + b)
    {
        std::cout << "Its all wright\n";
    }

    // Switch
    int switch_Val;
    std::cin >> switch_Val;
    switch (switch_Val)
    {
    case 1:
        std::cout << "One\n";
        break;
    case 2:
        std::cout << "Two\n";
        break;
    case 3:
        std::cout << "Three\n";
        break;
    default:
        std::cout << "Greater than three\n";
        break;
    }


    // Student Exercise
    // Discount on Bill
    int TA,D,DA;
    std::cin >> TA;
    if(TA >= 500){
        D = TA/5;
        DA = TA - D;
    }
    else if(TA >= 100){
        D = TA/10;
        DA = TA - D;
    }
    else {
        D = 0;
        DA = TA;
    }
    std::cout << "TOTAL AMOUNT       : " << TA << std:: endl;
    std::cout << "DISCOUNT           : " << D << std:: endl;
    std::cout << "DISCOUNTED AMOUNT  : " << DA << std:: endl;

    // Leap Year
    int year;
    std::cin >> year;
    if((year%400 == 0) || (year%100 != 0 && year%4 == 0))std::cout << "Leap Year" << std::endl;
    else std::cout << "Not a Leap Year" << std::endl;

    return 0;
}
/*
3 4
5
6
3 4
5
4 6 6
3 4 5
89 98 97 67 89
5
2
500
3000
 
*///EVER REMEMBER A ENTER (\n) AT END OF INPUT