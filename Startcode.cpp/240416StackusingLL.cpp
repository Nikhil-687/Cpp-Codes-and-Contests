#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * next;
}*top = NULL;


void Display(Node * Head){
    while(Head){
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}

void push(int tobepushed)
{

    Node *t = new Node;
    if(t == NULL)
    {
        cout << "Stack is Full\n";
    }
    else {
        t->data = tobepushed;
        t->next = top;
        top = t;
    }

}


int main ()
{
    
    
    push(10);
    push(20);
    push(30);
    push(40);
    Display(top);

}