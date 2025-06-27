#include<iostream>
using namespace std;

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  int n1;
  cout<<"enter the first number"<<endl;
  cin>>n1;
  int n2;
  cout<<"enter the second number"<<endl;
  cin>>n2;
  int count=0;
  int sum=0;
  if (n2>=n1){
    while (n1<=n2)
    {
      /* code */
      if(n1%3 == 0){
        sum = sum+n1;
        count=count +1;
        cout<<n1<<"  ";
      }
      else if(n1%5 == 0){
        sum =sum+n1;
        count =count+1;
        cout<<n1<<"  ";
      }
      n1=n1+1;
  
    }
    cout<<endl<<"Total number of elements in this set is: "<<count<<endl;
    cout<<"The sum of all the elements of this set is: "<<sum<<endl;
  }
  else if (n1>n2){
    while (n2<=n1)
    {
      /* code */
      if(n2%3 == 0){
        sum = sum+n2;
        count=count +1;
        cout<<n1<<"  ";
      }
      else if(n2%5 == 0){
        sum =sum+n2;
        count =count+1;
        cout<<n1<<"  ";
      }
      n2=n2+1;
  
    }
    cout<<"Total number of elements in this set is: "<<count<<endl;
    cout<<"The sum of all the elements of this set is: "<<sum<<endl;
  
  }
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}