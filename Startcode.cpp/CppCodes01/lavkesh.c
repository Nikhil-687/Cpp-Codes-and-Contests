#include <stdio.h>

//void mystrcmp(char *,const char *);
int main()
{
  int n;
  printf("enter value of n:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("* *");
    }
    printf("\n");
  }
  return 0;
}
