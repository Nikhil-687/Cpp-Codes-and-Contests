#include<bits/stdc++.h>

//Queue using array
struct Queue{
    int *A;
    int front = -1;
    int rear = -1;
    int max = 10;
};
Queue*q;

void insert(Queue*t,int x){
    if(t->rear == t->max-1){std::cout << "Queue is FULL\n";exit;}
    if(t == NULL){
        t->front++;
        t->rear++;
        t->A[t->rear] = x;
    }
    else{
        t->rear++;
        t->A[t->rear] = x;
    }
}

void insert(Queue*t,int x,int max){
    t->max = t->max + max;
    if(t->rear == t->max-1){std::cout << "Queue is FULL\n";exit;}
    if(t == NULL){
        t->rear++;
        t->A[t->rear] = x;
    }
    else{
        t->rear++;
        t->A[t->rear] = x;
    }
}

int Delete(Queue*t){
    if(t->front == t->rear){std::cout << "Queue is EMPTY\n";exit;}
    int x = t->A[t->front];
    t->front++;
    if(t->front == t->rear){t->front = -1;t->rear = -1;}
    return x;
}

void Display(Queue*t){
    if(t->front == t->rear)return;
    for(int i = t->front;i<=t->rear;i++){
        std::cout << t->A[i] << ", ";
    }
    std::cout << "\b\b .\n";
}


bool isEmpty(Queue*t){
    if(t->front == t->rear)return 1;
    return 0;
}

bool isFull(Queue*t){
    if(t->max-1 == t->rear)return 1;
    return 0;
}

int main(){
    int A[] = {2,3,4,5,6};
    // insert(q,5);
    // insert(q,6);
    Display(q);
}