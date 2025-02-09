#include<iostream>
#include<string>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the no. of Rows and Columns\n";cin>>rows;cin>>columns;
    string str = "I LOVE YOU";
    int i=0;
    while(i<rows){
        int j=0;
        while(j<columns){
            int k=0;
            while (j<9*k)
                cout<<""+str+"       ";
                j=j+1;
        }cout<<endl;
        i++;
    }
}