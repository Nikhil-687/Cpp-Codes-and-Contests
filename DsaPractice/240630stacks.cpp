#include<bits/stdc++.h>
using namespace std;
class StackOverFlow:public exception{};/*this guys are out of my mind*/
class StackUnderFlow:public exception{};/*this guys are out of my mind*/
class Stack{
  public:
    int size;
    int index=-1;
    int *ptr;
    Stack(int n){
        size=n;
        // int arr[n];/*dynamic memory (you'r also write)*/
        // ptr=arr;
        ptr = new int[n];
    }
    void push(int x){
        index++;
        if(index >= size){
            throw StackOverFlow(); 
            index--;/*this should also be here*/
        }else ptr[index]=x;
    }
    void/*int*/ pop(){
        index--;/*added by me*/
        if(index<-1/*index = -1 -> can be poped*/){
            throw StackUnderFlow();
            index++;/*this should also be here*/
        }
        else cout<<ptr[(index + 1)/*-- this guy(--) should not be here*/]<<endl;
        /*return ptr[index--]*/
    }
    void show(){
        for (int i = 0; i <= index; i++)
        {
            cout<<ptr[i] << " ";
        }
        cout<< "\n" << endl;
    }
};
int main()
{
    Stack nums(3);
    // try/*these guys terminating the code on first error I suggest use the direct version*/
    // {
    // nums.push(8);
    // nums.push(6);
    // nums.pop();
    // nums.pop();   
    // nums.pop();
    // nums.push(6);
    // nums.push(15);
    // nums.show();
    // nums.push(8);
    // nums.push(6);
    // nums.push(15);
    // nums.show();
    // }
    // catch(StackOverFlow SOF)
    // {
    //     cout<<"Stack overflow\n";
    // }
    // catch(StackUnderFlow SUF)
    // {
    //     cout<<"Stack underflow\n";
    // }
    nums.push(8);
    nums.push(6);
    nums.pop();
    nums.pop();   
    nums.pop();
    nums.push(6);
    nums.push(15);
    nums.show();
    nums.push(8);
    nums.push(6);
    nums.push(15);
    nums.show();
    return 0;
}