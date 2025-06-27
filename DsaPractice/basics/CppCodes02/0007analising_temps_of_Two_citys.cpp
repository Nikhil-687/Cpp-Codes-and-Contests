#include<iostream>
using namespace std;

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl<<endl;
  
  /*program moto:
   to take input of temperatures of city A and city B of last n days
   also show the average of the temperature of seven days */
  
  int n;
  cout<<"Enter the value of number of daye you are having data of both the cities ";
  cin>>n;
  int temp[n][1];
  int tem[n][2];
  int sum1=0;
  int sum2=0;
  int i=0;
  cout<<"Enter the temperature of city A"<<endl;
  while (i<n){
    cout<<"of day "<<i+1<<" is: ";
    cin>>temp[i][1];
    sum1=sum1+temp[i][1];
    i++;
  }
  i=0;
  cout<<"Enter the temperature of city B"<<endl;
  while (i<n)
  {
    /* code */
    cout<<"of day "<<i+1<<" is: ";
    cin>>tem[i][2];
    sum2=sum2+tem[i][2];
    i++;
  }
  i=0;
  cout<<"       city A | city B"<<endl;
  while (i<n)
  {
    /* code */
    cout<<"Day "<<i+1<<" :   "<<temp[i][1]<<"   |    "<<tem[i][2]<<endl;
    i++;

  }
  cout<<"Average: "<<" "<<sum1/n<<"   |    "<<sum2/n<<endl;
  

  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}