// the error is yera you considered as age
#include <iostream>
using namespace std;
int main(){
  int dob_date_1;
  int dob_mounth_1;
  int dob_year_1;
  int dob_date_2;
  int dob_mounth_2;
  int dob_year_2;
  cout<<"Enter date of birth ofo first person (formate:date mounth year)"<<endl;
  cin>>dob_date_1>>dob_mounth_1>>dob_year_1;
  cout<<"Enter date of birth ofo second person (formate:date mounth year)"<<endl;
  cin>>dob_date_2>>dob_mounth_2>>dob_year_2;
  dob_year_1=2023-dob_year_1;
  dob_year_2=2023-dob_year_2;
  if (dob_year_1>dob_year_2)
  {
    /* code */
    cout<<"person 1 is elder then person 2 by: "<<endl;
    if (dob_mounth_1>dob_mounth_2)
    {
      /* code */
      if (dob_date_1>=dob_date_2){
        cout<<dob_date_1-dob_date_2<<" Days, "<<dob_mounth_1-dob_mounth_2<<" Mounths, "<<dob_year_1-dob_year_2<<" Year."<<endl;
      }
      else if (dob_date_1<dob_date_2){
        cout<<dob_date_1-dob_date_2+30<<" Days, "<<dob_mounth_1-dob_mounth_2-1<<" Mounths, "<<dob_year_1-dob_year_2<<" Year."<<endl;

      }
    }
    else if (dob_mounth_1<dob_mounth_2)
    {
      /* code */
      if (dob_date_1>=dob_date_2){
        cout<<dob_date_1-dob_date_2<<" Days, "<<dob_mounth_2-dob_mounth_1+12<<" Mounths, "<<dob_year_1-dob_year_2-1<<" Year."<<endl;
      }
      else if (dob_date_1<dob_date_2){
        cout<<dob_date_2-dob_date_1+30<<" Days, "<<dob_mounth_2-dob_mounth_1-1+12<<" Mounths, "<<dob_year_1-dob_year_2-1<<" Year."<<endl;
      }
    }
    else{
      if (dob_date_1>=dob_date_2){
        cout<<dob_date_1-dob_date_2<<" Days, "<<dob_mounth_1-dob_mounth_2<<" Mounths, "<<dob_year_1-dob_year_2<<" Year."<<endl;
      }
      else if (dob_date_1<dob_date_2){
        cout<<dob_date_1-dob_date_2+30<<" Days, "<<dob_mounth_1-dob_mounth_2-1+12<<" Mounths, "<<dob_year_1-dob_year_2-1<<" Year."<<endl;

      }
    }
    
  }
  else if (dob_year_1<dob_year_2)
  {
    /* code */
    cout<<"person 2 is elder then person 1 by: "<<endl;
    if (dob_mounth_2>dob_mounth_1)
    {
      /* code */
      if (dob_date_2>=dob_date_1){
        cout<<dob_date_2-dob_date_1<<" Days, "<<dob_mounth_2-dob_mounth_1<<" Mounths, "<<dob_year_2-dob_year_1<<" Year."<<endl;
      }
      else if (dob_date_2<dob_date_1){
        cout<<dob_date_2-dob_date_1+30<<" Days, "<<dob_mounth_2-dob_mounth_1-1<<" Mounths, "<<dob_year_2-dob_year_1<<" Year."<<endl;

      }
    }
    else if (dob_mounth_2<dob_mounth_1)
    {
      /* code */
      if (dob_date_2>=dob_date_1){
        cout<<dob_date_2-dob_date_1<<" Days, "<<dob_mounth_1-dob_mounth_2+12<<" Mounths, "<<dob_year_2-dob_year_1-1<<" Year."<<endl;
      }
      else if (dob_date_2<dob_date_1){
        cout<<dob_date_1-dob_date_2+30<<" Days, "<<dob_mounth_1-dob_mounth_2-1+12<<" Mounths, "<<dob_year_2-dob_year_1-1<<" Year."<<endl;
      }
    }
    else{
      if (dob_date_2>=dob_date_1){
        cout<<dob_date_2-dob_date_1<<" Days, "<<dob_mounth_2-dob_mounth_1<<" Mounths, "<<dob_year_2-dob_year_1<<" Year."<<endl;
      }
      else if (dob_date_2<dob_date_1){
        cout<<dob_date_2-dob_date_1+30<<" Days, "<<dob_mounth_2-dob_mounth_1-1+12<<" Mounths, "<<dob_year_2-dob_year_1-1<<" Year."<<endl;
      }
    }
  } 
  else{
    if (dob_mounth_1>dob_mounth_2)
    {
      /* code */
      cout<<"person 1 is elder then person 2 by: "<<endl;
      if (dob_date_1>=dob_date_2){
        cout<<dob_date_1-dob_date_2<<" Days, "<<dob_mounth_1-dob_mounth_2<<" Mounths, "<<endl;
      }
      else if (dob_date_1<dob_date_2){
        cout<<dob_date_1-dob_date_2+30<<" Days, "<<dob_mounth_1-dob_mounth_2-1<<" Mounths, "<<endl;

      }
    }
    else if(dob_mounth_1<dob_mounth_2){
      cout<<"person 2 is elder than person 1 by: "<<endl;
      if (dob_date_2>=dob_date_1){
        cout<<dob_date_2-dob_date_1<<" Days, "<<dob_mounth_2-dob_mounth_1-1<<" Mounths, "<<endl;
      }
      else if (dob_date_2<dob_date_1){
        cout<<dob_date_2-dob_date_1+30<<" Days, "<<dob_mounth_2-dob_mounth_1-1<<" Mounths, "<<endl;
      }
    }
    else{
      if(dob_date_1>dob_date_2){
        cout<<"person 1 is elder then person 2 by: "<<dob_date_1-dob_date_2<<" Days. "<<endl;
      }
      else if(dob_date_1<dob_date_2){
        cout<<"person 2 is elder then person 1 by: "<<dob_date_2-dob_date_1<<" Days. "<<endl;
      }
      else{
        cout<<"They were born on same date hence no, one is elder then other";
      }
    }
    
  }
}