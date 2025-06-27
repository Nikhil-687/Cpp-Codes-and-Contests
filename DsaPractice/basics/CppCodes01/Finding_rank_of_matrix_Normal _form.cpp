#include<iostream>
using namespace std;
int main(){
  int n;
  int m;
  cout<<"you will be creating a matrix of  m X n "<<endl<<"Enter the value of m(no. of rows)"<<endl;
  cin>>m;
  cout<<"enter the value of n(no.of columns)"<<endl;
  cin>>n;
  int matrix[m][n];
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cin>>matrix[i][j];
    }
    cout<<endl;
  }
  cout<<"You'r entered Matrix is shown below is some thing is miss written just rerun the code again"<<endl;
  for(int a=0; a<m; a++){
    for (int b= 0; b <n; b++)
    {
      cout<<matrix[a][b]<<" ";
    }
    cout<<endl; 
  }
  int x;
  cout<<endl<<endl<<endl<<"Print '1' if all right"<<endl;
  cin>>x;
  if(x==1){
    for (int d = 0; d < m; d++)
    {
      /* code */
      for (int e = 0; e < n; e++)
      {
        /* code */
        matrix[d][d]=matrix[d][d];
        matrix[d][e]=matrix[d][e]/matrix[d][d];

        for(int f=d; f<m;f++)
        {
          /* code */
          matrix[f][e]=matrix[f][e]-matrix[e][e]*matrix[1][e];
        }
      }
    }

    for(int k=0; k<m;k++){
      for(int l=0; l<n;l++){
        cout<<matrix[k][l]<<" ";
      }
      cout<<endl;
    }
    int is_zero;
    int count=m;
    for (int g = 0; g < m; g++)
    {
      /* code */
      for (int h = 0; h < n; h++)
      {
        /* code */
        if(matrix[g][h] == 0){
          is_zero=0;
        }
      }
      if(is_zero != 0){
        count=count-1;
      }
    }  
    cout<<"The Rank of Matrix is: "<<count;
  }
}