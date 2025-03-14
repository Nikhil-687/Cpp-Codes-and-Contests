//not working today but will make sure work next day

#include <bits/stdc++.h>
using namespace std;

//linked lists through to through
struct Node
{

    int data;
    struct Node * next;

} *Head = NULL;


void Creat(int A[], int n)
{

    
    struct Node *t, *last;
    Head = new struct Node;
    Head->data = A[0];
    Head->next = NULL;
    last = Head;
    t = last->next;

    for(int i = 1;i < n;i++){
        t = new struct Node;
        t->data = A[i];
        t->next = NULL;
        Head->next = t;
        Head = Head->next;
    }

}

void Display(struct Node *p)
{


    while(p)
    {
        cout << p->data << " ";
        p = p->next;
    }

}


int main()
{


    int A[5] = {2, 3, 4, 6};
    Creat(A, 5);
    
    Display(Head);


}