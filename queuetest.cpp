#include<bits/stdc++.h>
using namespace std;

struct Node 
{

    int front = -1;
    int rear = -1;
    int size = 0;
    int *A;
    
};





void create(Node * que,int A[],int size,int n)
{

    // Recreate function -> add this much here{// 
    //      que->front = que->rear = -1;
    //      free(A);
    //}
    que->A = new int[size];

    que->size = size;
    
    for(int i = 0;i < n && n <= size;i++)
    {

        que->A[i] = A[i];
        que->front++;
    
    }
    // for(int i = 0;i < size && n > size;i++)
    //     que->A[i] = A[i];
    //     que->front++;
    

}


void recreate(Node * que,int A[],int size,int n){

    // Recreate function -> add this much here{// 
    que->front = que->rear = -1;
    free(que->A);
    //}
    que->A = new int[size];

    que->size = size;
    
    for(int i = 0;i < n && n <= size;i++)
    {

        que->A[i] = A[i];
        que->front++;
    
    }
    // for(int i = 0;i < size && n > size;i++)
    //     que->A[i] = A[i];
    //     que->front++;
    

}



void Display(Node que)
{

    for(int i = 0;i <= que.rear;i++)
    {cout << "_ ";}
    for(int i = que.rear+1;i <= que.front;i++)
    {

        printf("%d ",que.A[i]);

    }
    printf("\n");

}


void enqueue(Node * que,int tobequeued)
{

    if(que->front != que->size)
    {
        
        que->front++;
        que->A[que->front] = tobequeued; 
        
    }
   

}

int dequeue(Node * que)
{

    int x = -1;
    if(que->front == que->rear)
    {

        cout << "Queue is completely empty: ";

    }
    else 
    {

        que->rear++;
        x = que->A[que->rear];
        Display(*que);//for flash symbol;
      //   Display(*que);
    }
    return x;

}

int main (){

/*  
    // flash symbole

    cout << "1 1\n1 1\n";
    struct Node que;
    int A[] = {1,1};
    create(&que,A,7,2);
    Display(que);
    Display(que);
    enqueue(&que,que.A[que.front]);
    Display(que);
    Display(que);
    enqueue(&que,que.A[que.front]);
    Display(que);
    Display(que);
    enqueue(&que,que.A[que.front]);
    dequeue(&que);
    dequeue(&que);
    dequeue(&que);
    enqueue(&que,que.A[que.front]);
    Display(que);
    Display(que);
    enqueue(&que,que.A[que.front]);
    Display(que);
    Display(que);
    enqueue(&que,que.A[que.front]);
    // Display(que);
    // Display(que);
    dequeue(&que);
    dequeue(&que);
    dequeue(&que);
    dequeue(&que);
    // dequeue(&que);
    cout << "       \\_\\\\__ . __//_/\n";
    // dequeue(&que);
    // dequeue(&que);
    // dequeue(&que);
    */
    Node que;
    int A[] = {2, 3, 4};
    create(&que,A,7,3);
    enqueue(&que,que.A[que.front]+1);
    Display(que);
    enqueue(&que,que.A[que.front]+1);
    Display(que);
    enqueue(&que,que.A[que.front]+1);
    Display(que);
    enqueue(&que,que.A[que.front]+1);
    Display(que);
    enqueue(&que,que.A[que.front]+1);
    Display(que);
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    cout << dequeue(&que) << "\n";
    create(&que,A,8,3);
    Display(que);
    recreate(&que,A,8,3);
    Display(que);


}