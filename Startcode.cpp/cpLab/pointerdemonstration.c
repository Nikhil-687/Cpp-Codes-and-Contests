#include<stdio.h>
#include<stdlib.h>

void main()
{

    int *p;
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);
    p = &a;
    printf("Your Entered number is : %d \n",*p);

    int n;
    printf("Enter the number of numbers : ");
    scanf("%d",&n);
    int *ptr = (int *)malloc((n+1)*sizeof(int));
    printf("Enter a array of numbers of size %d or less : ",n);
    for(int i=0;i<n;i++)
    {

        scanf("%d",ptr+i);
          

    }

    for(int i = 0;i < n+1;i++){
        printf("\n%d",*(ptr+i));
    }

    printf("\n");
    free(ptr);

    ptr = (int *)calloc(n,sizeof(int));
    printf("Enter a array of numbers of size %d or less : ",n);
    for(int i=0;i<n;i++)
    {

        scanf("%d",ptr+i);
        
    }

    for(int i = 0;i < n+1;i++){
        printf("\n%d",*(ptr+i));
    }

    printf("\n");
    free(ptr);

    ptr = NULL;

}