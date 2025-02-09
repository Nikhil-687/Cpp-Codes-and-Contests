#include<iostream>
using namespace std;

int main()
{

  cout<<"program to find sum of multiple numbers (of given numbers) between two given numbers "<<endl<<endl;
  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  int num;
  cout<<"For example:-"<<endl<<"           you have to find the sum of multiples of x,y,z then you will have to enter 3 "<<endl<<"enter the number's of numbers whose multyples are to be added "<<endl;
  cin>>num;
  int count=0;
  int i=1;
  int num_2;
  cout<<"how many times you will like to repeat the code"<<endl;
  cin>>num_2;
  while (num_2>0){
  int sum=0;
  int a[num];
    while(i<=num){
      
      if (i%10 == 1)
      {
          /* code */
        cout<<"Enter you'r "<<i<<"st number whose multiples are to be added"<<endl;
        cin>>a[i];
      }
      else if(i%10 == 2){
        cout<<"Enter you'r "<<i<<"nd number whose multiples are to be added"<<endl;
        cin>>a[i];
    
      }
      else if(i%10 == 3){
        cout<<"Enter you'r "<<i<<"rd number whose multiples are to be added"<<endl;
        cin>>a[i];
      }
      else{
        cout<<"Enter you'r "<<i<<"th number whose multiples are to be added"<<endl;
        cin>>a[i];
      }
      i++;
    }
    int n1;
    cout<<"Enter a number"<<endl;
    cin>>n1;
    int n2;
    cout<<"Enter second number"<<endl;
    cin>>n2;
    int j;
    int k;
    if(n1>n2)
    {
      /* code */
      while(n1>=n2)
      {
        /* code */
        j=0;
        while(j<=num){
          if(n2%a[j] == 0){
            count= count+1;
            sum=sum+n2;
            cout<<n2<<"  ";
            j=j+num;
          }
          j++;
        }
        n2++;
      }
      cout<<endl<<"Total number of elements in this set is: "<<count<<endl;
      cout<<"Total sum of all elements of this set is: "<<sum<<endl;
      
    }
    else if(n2>n1)
    {
      /* code */
      while(n2>=n1)
      {
        /* code */
        k=0;
        while(k<=num){
          if(n1%a[k] == 0){
            count= count+1;
            sum=sum+n1;
            cout<<n1<<"  ";
            k=k+num;
          }
          k++;
        }
        n1++;
      }
      cout<<endl<<"Total number of elements in this set is: "<<count<<endl;
      cout<<"Total sum of all elements of this set is: "<<sum<<endl;
      
    }
    num_2=num_2-1;
     
  }

  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}