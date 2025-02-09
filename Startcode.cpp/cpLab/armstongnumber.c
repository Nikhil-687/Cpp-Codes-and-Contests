#include<stdio.h>
#include<math.h>

int main(){
    int num,rem,i,copy;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    copy = num;
    i = 0;

    // while(num){
    //     num = num/10;
    //     i++;
    // }

    num = copy;
    while(num){
        rem = num%10;
        int x = rem * rem * rem;
        sum = sum + x;
        num = num/10;
        i++;
    }
    
    if(sum == copy){
        printf("Number is armstrong\n");
    }
    else printf("Not a armstrong Number\n");
    return 0;
}