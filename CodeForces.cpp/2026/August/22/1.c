#include<stdio.h>
#include<stdlib.h>

struct vector{
    int a;
};


int main(){
    struct vector* b = (struct vector *)malloc(3 * sizeof(struct vector));
    (b+1)->a = 2;
    printf("%d\n", (b)->a);
    printf("%ld\n", sizeof(3));
}