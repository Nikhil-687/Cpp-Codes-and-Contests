#include<iostream>
#include<math.h>
using namespace std;
int fundb(int number){
  int digit;
  int i=0;
  int number_binary=1;
  while(number>0){
    digit=number%2;
    i=i+1;
    number=number/2;
    number_binary=number_binary+digit*pow(10,i-1);
  }
  cout<<"you'r expected output is "<<number_binary-1<<endl;
  cout<<"The no. of total digits in you'r binary no. is "<<i<<endl;
  return 0;
}
int main(){
  char input_base;
  cout<<"Enter base type of number you have to convert"<<endl;
  cin>>input_base;
  char output_base;
  cout<<"Entre base type in which you would like to have output"<<endl;
  cin>>output_base;
  long int number1;
  cout<<"Enter you'r Loved number "<<endl;
  cin>>number1;
  if (input_base == 'D')
  {
    if(output_base == 'B'){
      fundb(number1);
    }
  }
  return 0;
}