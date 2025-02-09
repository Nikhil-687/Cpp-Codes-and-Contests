#include<stdio.h>

void main (){
    int year;
    printf("Enter the Year\n");
    scanf("%d", &year);
    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
    {
        printf("Year is a Leap Year\n");
    }
    else{
        printf("Year is not a leap \n");
    }
}