#include<stdio.h>
    
    
int main(){
    int i, j, k;
    int n, m, p;
    printf("Enter the value of no.of rows and columns of matrix 'A' : ");
    scanf("%d %d",&n,&m);
    printf("enter the no. of columns of matrix 'B' : ");
    scanf("%d",&p);
    int matrixA[n][m];
    int matrixB[m][p];

    printf("                                              MATRIX A\n");
    for(i = 0;i < n;i++)
    {
        printf("enter row no. %d of matrix 'A' (%d elements ) : ",i+1,m);    
    
        
        for(j = 0;j < m;j++){
            scanf("%d",&matrixA[i][j]);
            
        }
        
    }
    
    printf("                                              MATRIX B\n");
    for(i = 0;i < m;i++){
        printf("enter row no. %d of matrix 'B' (%d elements ) : ",i+1,p);    
    
        for(j = 0 ;j < p;j++){
            scanf("%d",&matrixB[i][j]);
        }
    }

    printf("RESULTANT MATRIX :");
    
    int result[n][p];
    for(i = 0;i < n;i++){
        printf("\n");
        for(j = 0;j < p;j++){
            result[i][j] = 0;
            for(k = 0;k < m;k++){
                result[i][j] += matrixA[i][k]*matrixB[k][j];
            }
            
            int x = result[i][j];
            if(x < 10)printf(" %d   " , result[i][j]);
            else if(x < 100)printf(" %d  ",x);
            else printf(" %d ",x);
            
        }

        
    }printf("\n");
}