#include<iostream>
using namespace std;

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  
  // finding max amoung array

  int A[10];
  int h;
  
 
  int a=0;
  while (a<10)
  {
    /* code */
    cin>>A[a];
    a++;
  }
  
  for (int i = 0; i < 10; i++)
  {
    /* code */
    if (A[0]<A[1]){ 
      int j=0;
      while (j<10-i)
      {
        A[j]=A[j+1];
        j=j+1;
      }
    }
    else{
      h=A[0];
      int k=0;
      while (k<10-i)
      {
        A[k]=A[k+1]; 
        k=k+1;
      }
      A[0]=h;
    }

  }
  cout<<"The Largest Number Amoung the Array is: "<<A[0];
  
  
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}