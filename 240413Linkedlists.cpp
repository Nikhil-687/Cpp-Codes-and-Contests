#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * next;
}*Head = NULL;


void create(Node *st,int A[],int n)
{

    Node * t;
    Node * last;
    Head = new Node;
    Head->data = A[0];
    Head->next = NULL;
    last = Head;

    for(int i = 1;i < n;i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}

void Display(Node * Head){
    while(Head){
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}

int main ()
{
   
    int A[5] = {2, 3, 4, 5, 6};
    create(Head,A,5);
    Display(Head);

}