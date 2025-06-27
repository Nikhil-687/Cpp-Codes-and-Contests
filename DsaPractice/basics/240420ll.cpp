#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{

    int data ;
    Node * next;

}*Head = NULL;;

//creating linked list 


void create(int A[],int n)
{

    Node * t;
    Node * last;
    Head = new Node;
    Head->data = A[0];
    Head->next = NULL;

    last = Head;

    for(int i = 1;i < n;i++)
    {

        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t; 

    }

}

void Display(Node *Head)
{

    while(Head){
        cout << Head->data << " ";
        Head = Head->next;
    }    
    cout << "\n";

}


void push(Node * Head,int tobepushed)
{

    Node * t;
    t = new Node;
    t->data = tobepushed;
    t->next = NULL;
    while(Head->next){
        Head = Head->next;
    }
    Head->next = t;


}


int pop(Node * Head)
{

    int x = -1;
    if(Head == NULL)cout << "Linked List is Empty\n";
    else
    {
        while(Head->next->next){Head = Head->next;}
        Node * todeletelater;
        x = Head->next->data;
        todeletelater = Head->next;
        Head->next = NULL;
        free(todeletelater);
    }
    return x;

}

pair<int,int> nodesum(Node * Head)
{

    pair<int,int> x;
    x.first = 0;
    x.second = 0;
    while(Head){
        x.first++;
        x.second += Head->data;
        Head = Head->next;
    }
    return x;


}


vector<int> fun(int n){
    vector<int> V;
    while(n--){
        V.push_back(n+1);
    }
    return V;
}

int main()
{


    int A[] = {2, 3, 4, 5, 6, 7, 8};
    create(A, 7);
    Display(Head);
    push(Head,5);
    Display(Head);
    cout << pop(Head) << " \n";
    Display(Head);
    cout << "Number of node is : " << nodesum(Head).first << "\nSum of all elements is : " << nodesum(Head).second << endl;

    for(int i = 0;i < 5;i++){
        cout << fun(5).at(i) << " ";
    }
    cout << endl;


}