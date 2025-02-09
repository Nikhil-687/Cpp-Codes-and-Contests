#include<bits/stdc++.h>
#include"240627array.hpp"
using namespace std;


struct Node
{
    int data;
    Node * next;
    Node(int x){data = x;next = NULL;}

}*head;

Node * create(Array a1)
{

    // h = head;
    // head->data = a1.at(0);
    // head->next = NULL;
    // head = head->next; 
    // for(int i = 0;i < a1.size;i++)
    // {
    //     head->data = a1.at(i+1);
    //     head->next = NULL;
    //     head = head->next;
    // }

    Node * last,* t2 = NULL;
    last->data = a1.at(0);
    last->next = t2;
    head = last;
    for(int i = 1;i < a1.size;i++){
        Node * t = NULL;
        last->data = a1.at(i);
        last->next = t;
        head->next = last;
    }
    return head;

}

int main()
{
    
    // cout << head.data << endl;
    int a[4] = {3,3,2,4};
    Array a1(8,a);
    cout << a1.at(2);
    create(a1);                       
    // cout << arr->data << endl;

}