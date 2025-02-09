#include<bits/stdc++.h>
using namespace std;

//using array

struct QueueArray
{

    int front;
    int rear;
    int size = 0;
    int * A; 

}*que;

void create(int A[])
{

    if(que->size == 0)cout <<"Your queue should atlest have a size more than 0\n";
    que->A = new int[que->size];
    que->front = que->rear = -1;

}

void push(int tobepushed)
{

    if(que->rear = que->size)
    {
        que->rear++;
        que->A[que->rear] = tobepushed;
    }
    else cout << "Queue is Full \n";

}

int pop()
{

    int x = -1;

    if(que->front == que->rear)
    {
        cout << "Queue is empty \n";
    }
    else
    {
        que->front++;
        x = que->A[que->front];
    }

    return x;

}

bool isempty()
{
    if(que->front == que->rear)return 1;
    return 0;
}

bool isfull()
{
    if(que->rear == que->size)return 1;
    return 0;
}

