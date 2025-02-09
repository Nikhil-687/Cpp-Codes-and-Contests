#include<iostream>
using namespace std;
int main()
{

  //elong form  steps 
  //a row containing greater number of zeroes is puted below the line containing less no. of zeroes at the begining
  //first non zero element is equal to 1 inev ery row
  //example 
  //1 3 4 5 
  //0 1 2 8
  //0 0 0 1
  //0 0 0 0
  int m;
  int n;
  cout <<"Enter the value of m(no. of rows )"<<endl;
  cin>>m;
  cout<<"Enter the value of n(no. of columns)"<<endl;
  cin>>n;
  int count;
  int count_rows=0;
  for (int i = 0; i < 1; i++)
  {
    /* code */
    for (int j = 0; j < n; j++)
    {
      /* code */
      int matrix[i][j];
      cin>>matrix[i][j];
      matrix[i][j]=matrix[i][j]/matrix[1][1];
    }
    
  }
  
  for (int i = 1; i < m; i++)
  {
    for (int j = 0; j < i; j++)
    {
      int matrix[i][j];
      cin>>matrix[i][j];
      matrix[i][j]=matrix[i][j] - matrix[i][j]*matrix[i][1];
      if(matrix[i][j]== 0){
        count = count +1;
      }
      else if( matrix[i][j]!= 0){
        for(int k=j; k<j+1; k++){
          matrix[i][k]=matrix[i][j]/matrix[i][j];
        }
      }
     
      if( count<n){
        count_rows = count_rows+1;
      }
      cout<<"you'r Entered matrix is shown below if some typing error just re run the code ";
      for (int a = 0; a < m; a++){
        for (int b = 0; b < n; b++)
        {
          cout<<matrix[a][b]<<"    ";
        }  
        cout<<endl<<endl;
      }
    }
  }
  cout<<"Rank of the matrix is: "<<count_rows<<endl;
  
  
}