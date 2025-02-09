#include<iostream>
using namespace std;

int main()
{

  cout<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"***********************"<<"***************:TIC TAC TOE:***************"<<"*********************"<<endl<<endl;
  
  string person_1;
  cout<<"First Person Name: ";
  cin>>person_1;
  string person_2;
  cout<<"Second Person's Name: ";
  cin>>person_2;
  int w1=0;
  int w2=0;
  int moves[9];
  for(int i=0;i<3;i++){
    for (int j = 0; j < 2; j++)
    {
      /* code */
      cin>>moves[i,j];
    }   
  }
  int i=0;
  while (i<9)
  {
    /* code */
    if (i%2 ==0){
      //O
      moves[i] = 'O';
    }
  }
  
  
  
  cout<<endl<<"***********************"<<"*********************"<<"*********************"<<"*********************"<<endl;
  cout<<"                                                                      Nikhil Patidar"<<endl;
  cout<<"                                                                        Ist Semester"<<endl;
  cout<<"                                                                Computer Science and"<<endl;
  cout<<"                                                                         Engineering"<<endl;
  cout<<"                                                                        From:Barwani"<<endl;

}