#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *header = NULL;

void insertHead(int x)
{
    Node *t = header;
    if (t == NULL)
    {
        Node *p = new Node;
        p->data = x;
        p->next = NULL;
        header = p;
    }
    else
    {
        Node *p = new Node;
        p->data = x;
        p->next = header;
        header = p;
    }
}

void display()
{
    Node *t = header;
    cout << "Linked list: ";
    if (t != NULL)
    {
        while (t != 0)
        {
            cout << t->data << " ";
            t = t->next;
        }
    }
    if (header == NULL)
        cout << "Empty Linked List\n";
    else
        cout << "\n";
}

void insertTail(int x)
{
    Node *t = header;
    if (t == NULL)
    {
        Node *p = new Node;
        p->data = x;
        p->next = NULL;
        header = p;
    }
    else
    {
        while (t->next != NULL)
            t = t->next;
        Node *p = new Node;
        p->data = x;
        p->next = NULL;
        t->next = p;
    }
}

void insertAfer(int x, int y)
{
    Node *t = header;
    if (t == NULL)
        cout << "ERROR: " << "VALUE NOT FOUND\n";
    else
    {
        while (t->next != NULL && t->data != x)
        {
            t = t->next;
        }
        if (t->data == x)
        {
            Node *p;
            p = new Node;
            p->data = y;
            p->next = t->next;
            t->next = p;
        }
        else
        {
            cout << "ERROR: " << "VALUE NOT FOUND\n";
        }
    }
}

void insertBefore(int x, int y)
{
    Node *t = header, *tp; 
    if (t == NULL)
        cout << "ERROR: " << "VALUE NOT FOUND\n";
    else if(t->next == NULL && t->data == x){
        insertHead(y);
    }
    else
    {

        while (t->next != NULL && t->data != x)
        {
            tp = t;
            t = t->next;
        }
        if (t->data == x)
        {
            Node *p;
            p = new Node;
            p->data = y;
            p->next = t;
            tp->next = p;
        }
        else if (t->next == NULL)
        {
            cout << "ERROR: " << "VALUE NOT FOUND\n";
        }
    }
}

int main()
{

    /*code*/
    insertAfer(3, 4);
    display();
    insertHead(5);
    insertHead(6);
    insertHead(7);
    insertAfer(6,4);
    display();
    insertAfer(3, 4);
    insertAfer(4, 4);
    insertTail(8);
    insertTail(9);
    insertTail(10);
    display();
    display();
    insertBefore(10,1);
    insertBefore(10,2);
    insertBefore(10,3);
    display();
    return 0;
}