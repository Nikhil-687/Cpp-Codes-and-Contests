#include<bits/stdc++.h>
using namespace std;

//Array ADT
class Array{
   int size;
   int *A;
   public:

      Array(int size,int *A)
      {
         A = new int[size];
      };

      int at(int index)
      {
         return A[index];
      }

      void push(int tobepushed)
      {
         int *b = new int [size+1];
         for(int i = 0;i < size;i++)
         {

            b[i] = A[i];

         }b[size] = tobepushed;
         A = b;
      }
      
};







int main()
{

   int A[] = {3,4,5,6,7};
   Array arr(5,A); 
   cout << arr.at(2) << endl;

}
