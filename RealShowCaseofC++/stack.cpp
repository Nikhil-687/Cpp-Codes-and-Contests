#include <bits/stdc++.h>

struct Stack
{
    int *A;
    int top;
    int max;
};
Stack *st = new Stack;

int length(int *A)
{
    int i = 0;
    while (A[i] != 0)
        i++;
    return i;
}

void create(Stack *s, int *A, int max)
{
    s->max = max;
    s->A = A;
    s->top = length(A);
}

void push(Stack *s, int x)
{
    if (s->top < s->max)
    {
        s->A[s->top] = x;
        s->top++;
    }
    else
    {
        std::cout << "StackOverflow.\n";
    }
}

void display(Stack *t)
{
    for (int i = 0; i < t->top; i++)
    {
        std::cout << t->A[i] << ", ";
    }
    std::cout << "\b\b .\n";
}

int pop(Stack *t)
{
    if (t->top == -1)
    {
        std::cout << "stack underflow\n";
        exit;
    }
    int x = t->A[t->top];
    t->top--;
    return x;
}

int peak(Stack *t, int pos)
{
    if (pos <= 0)
    {
        std::cout << "Position should be mentioned as 1 based indexing, i.e. pos >= 1\n";
        exit;
    };
    if (pos > t->top + 1)
    {
        std::cout << "Position should be at max the no.of elemnts in stack\n";
        exit;
    };
    int index = t->top - pos + 1;
    return t->A[index];
}

int stackTop(Stack *t)
{
    if (t->top == -1)
    {
        std::cout << "stack underflow\n";
        exit;
    }
    return t->A[t->top];
}

bool isEmpty(Stack *t)
{
    if (t->top == -1)
        return 1;
    return 0;
}

bool isFull(Stack *t)
{
    if (t->top == t->max - 1)
        return 1;
    return 0;
}

// stack using linked list
struct Node
{
    int data;
    Node *next;
    int size;
};
Node *top = NULL;

bool isEmpty(Node *t)
{
    if (t == NULL)
        return 1;
    return 0;
}

bool isFull(Node *t)
{
    Node *q = new Node;
    if (q != NULL)
        return 0;
    return 1;
}

void push(Node *&t, int x)
{
    // if(isFull(t)){return;}
    if (t == NULL)
    {
        t = new Node;
        t->data = x;
        t->next = NULL;
        t->size = 0;
    }
    else
    {
        Node *q = new Node;
        q->data = x;
        q->next = t;
        t = q;
        t->size = t->size + 1;
    }
}

void display(Node *t)
{
    if (t == NULL)
    {
        std::cout << "\n";
        return;
    }
    while (t != NULL)
    {
        std::cout << t->data << ", ";
        t = t->next;
    }
    std::cout << "\b\b .\n";
}

int pop(Node *&t)
{
    if (t == NULL)
    {
        std::cout << "Stack Underflow\n";
        exit;
    }
    else
    {
        t->size--;
    }
    int x = t->data;
    Node *q = t;
    t = t->next;
    q->next = NULL;
    free(q);
    return x;
}

void peak(Node *t, int pos)
{
    if (t == NULL)
    {
        std::cout << "empty Stack\n";
        exit;
    }
    if (pos <= 0)
    {
        std::cout << "Position should be mentioned as 1 based indexing, i.e. pos >= 1\n";
        exit;
    }
    else if (pos > t->size + 1)
    {
        std::cout << "Position should be at max the no.of elemnts in stack\n";
        exit;
    }
    else
    {
        int index = pos - 1;
        for (int i = 0; i < index; i++)
        {
            t = t->next;
        }
        std::cout << pos << " element from Peak element is: " << t->data << std::endl;
    }
}

// infix to Postfix



int main()
{
    int a[5] = {2, 3, 4, 5, 6};
    create(st, a, 10);
    push(st, 7);
    display(st);
    push(top, 2);
    push(top, 3);
    push(top, 4);
    push(top, 5);
    push(top, 6);
    display(top);
    std::cout << pop(top) << std::endl;
    display(top);
    peak(top, 0);
    peak(top,-1);
    peak(top, 2);
    peak(top, 4);
    peak(top, 6);
    return 0;
}