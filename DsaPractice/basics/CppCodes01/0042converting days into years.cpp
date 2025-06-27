#include<iostream>
using namespace std;
int main()
{
    
    int days;
    cout<<"Enter the number of days to be converted to years"<<endl;
    cin>>days;
    int initial_days=days;
    int st_year;
    cout<<"Enter the year the days are to be started mapping"<<endl;
    cin>>st_year;
    int initial_year=st_year;
    while(days>0){
        if(st_year%4==0){
            days=days-366;
            st_year=st_year+1;
        }
        else{
            days=days-365;
            st_year=st_year+1;
        }


    }
    
    if(st_year%4==0){
        
        days=366+days;

    }
    else{
        days=days+365;
    }
    cout<<"Entered "<<initial_days<<" days is equals to "<<st_year-initial_year<<" years + "<<days<<" days"<<endl;
    cout<<"After "<<initial_days<<" the year running will be "<<st_year<<endl;
    

}