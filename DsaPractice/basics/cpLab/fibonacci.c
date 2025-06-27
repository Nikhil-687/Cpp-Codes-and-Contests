#include<stdio.h>
int main () 
{

    int t1 = 0;
    int t2 = 1;
    int n;
    printf("\nEter the value of n: ");
    scanf("%d",&n);
    printf("%d %d ",t1 , t2);
    for(int i = 2;i < n;i++)
    {

        int t = t1 + t2;
        printf("%d ",t);
        t1 = t2;
        t2 = t;


    }

    printf("\n");
}