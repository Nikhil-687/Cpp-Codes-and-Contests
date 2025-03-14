#include<bits/stdc++.h>
using namespace std;

/*JUST UNCOMMENT TO USE THE DESIERED TYPE OF QUEUE FUNCTIONS
|| DONT FORGET TO COMMENT THE MAIN FUNCTION AT THE LAST OF FILE   
*/

/*  //queue with array with struct


struct Node 
{

    int front = -1;
    int rear = -1;
    int size = 0;
    int *A;
    
};


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
        Display(*que);
    }
    return x;

}

int main (){
  
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
*/

/*  //creating queue with array with classes

class Queue
{


    public:
        struct Node{
            int rear;
            int front = rear = -1;
            int size;
            int * A;    
        };

        void create(Node * que,int A[],int size,int n);
        void recreate(Node * que,int A[],int size,int n);
        void enqueue(Node * que,int tobequeued);
        int dequeue(Node * que);
        void Display(Node que);



};





        void Queue::create(Node * que,int A[],int size,int n)
        {


            // Recreate function -> add this much here{// 
            //      que->front = que->rear = -1;
            //      free(A);
            //}
            que->A = new int[size];

            que->size = size;

            if(n <= que->size){
                for(int i = 0;i < n;i++)
                {

                    que->A[i] = A[i];
                    

                }   
                que->front = n;
                // for(int i = 0;i < size && n > size;i++)
                //    que->A[i] = A[i];
                //     que->front++;

            }
        }   
        void Queue::recreate(Node * que,int A[],int size,int n)
        {

             
            // Recreate function -> add this much here{// 
            que->front = que->rear = -1;
            free(que->A);
            //}
            que->A = new int[size];

            que->size = size;
            if(n <= que->size){
                for(int i = 0;i < n;i++)
                {

                    que->A[i] = A[i];
                
    
                }
                que->front = n;
                // for(int i = 0;i < size && n > size;i++)
                //     que->A[i] = A[i];
                //     que->front++;

            }
        }
        void Queue::enqueue(Node * que,int tobequeued)
        {

            if(que->front != que->size)
            {
        
                
                que->A[que->front] = tobequeued; 
                que->front++;
        
            }

        }
        int Queue::dequeue(Node * que)
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
                //Display(*que);//for flash symbol;
                //Display(*que);
            }
            return x;

        }
        void Queue::Display(Node que)
        {

            for(int i = 0;i <= que.rear;i++)
            {cout << "_ ";}
            for(int i = que.rear+1;i <= que.front;i++)
            {

                printf("%d ",que.A[i]);

            }
            printf("\n");

        }
        

int main()
{

    cout << "HI\n";
    int A[] = {2, 3, 4};
    Queue que;
    Queue::Node node;
    que.create(&node,A,6,3);
    cout << node.size << "\n";
    cout << node.A[0] << " " << node.A[1] << " " << node.A[2] << "\n";
    A[2] = 5;
    que.recreate(&node,A,5,3);
    cout << node.size << "\n";
    cout << node.A[0] << " " << node.A[1] << " " << node.A[2] << "\n";
    que.create(&node,A,8,3);
    // cout << node.size << "\n";
    // cout << node.A[0] << " " << node.A[1] << " " << node.A[2] << "\n";
    que.Display(node);
    // que.enqueue(&node,7);
    que.enqueue(&node,7);
    que.Display(node);
    que.dequeue(&node);
    que.Display(node);
    
}


//queue with linked lists with struct
*/

/*  //queue with linked lists with classes


struct Link
{


    int data;
    Link * next;


};


void create(Link * que,int A[],int size,int n)
{

    

    
    Link * t;
    Link * last;
    que = new Link;
    que->data = A[0];
    que->next = NULL;
    last = que;

    for(int i = 1;i < n;i++){
        t = new Link;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    

}

void recreate(Link * que,int A[],int size,int n)
{

    

    create(que,A,size,n);   

    
}



// void Display(Node que)
// {

//     for(int i = 0;i <= que.rear;i++)
//     {cout << "_ ";}
//     for(int i = que.rear+1;i <= que.front;i++)
//     {

//         printf("%d ",que.A[i]);

//     }
//     printf("\n");

// }


// void enqueue(Node * que,int tobequeued)
// {

//     if(que->front != que->size)
//     {
        
//         que->front++;
//         que->A[que->front] = tobequeued; 
        
//     }
   

// }

// int dequeue(Node * que)
// {

//     int x = -1;
//     if(que->front == que->rear)
//     {

//         cout << "Queue is completely empty: ";

//     }
//     else 
//     {

//         que->rear++;
//         x = que->A[que->rear];
//         Display(*que);//for flash symbol;
//         Display(*que);
//     }
//     return x;

// }

int main (){
  
    // flash symbole


    // cout << "1 1\n1 1\n";
    // struct Node que;
    // int A[] = {1,1};
    // create(&que,A,7,2);
    // Display(que);
    // Display(que);
    // enqueue(&que,que.A[que.front]);
    // Display(que);
    // Display(que);
    // enqueue(&que,que.A[que.front]);
    // Display(que);
    // Display(que);
    // enqueue(&que,que.A[que.front]);
    // dequeue(&que);
    // dequeue(&que);
    // dequeue(&que);
    // enqueue(&que,que.A[que.front]);
    // Display(que);
    // Display(que);
    // enqueue(&que,que.A[que.front]);
    // Display(que);
    // Display(que);
    // enqueue(&que,que.A[que.front]);
    // // Display(que);
    // // Display(que);
    // dequeue(&que);
    // dequeue(&que);
    // dequeue(&que);
    // dequeue(&que);
    // // dequeue(&que);
    // cout << "       \\_\\\\__ . __//_/\n";
    // // dequeue(&que);
    // // dequeue(&que);
    // // dequeue(&que);
    // Node que;
    // int A[] = {2, 3, 4};
    // create(&que,A,7,3);
    // enqueue(&que,que.A[que.front]+1);
    // Display(que);
    // enqueue(&que,que.A[que.front]+1);
    // Display(que);
    // enqueue(&que,que.A[que.front]+1);
    // Display(que);
    // enqueue(&que,que.A[que.front]+1);
    // Display(que);
    // enqueue(&que,que.A[que.front]+1);
    // Display(que);
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // cout << dequeue(&que) << "\n";
    // create(&que,A,8,3);
    // Display(que);
    // recreate(&que,A,8,3);
    // Display(que);


    Link que;
    int A[] = {3, 4, 5, 6, 7};
    create(&que,A,8,5);
    while(que.next)
    {
    
        cout << que.data << endl;
    
    }


}






// circular queue with array with struct
*/

/*  //circular queue with array with classes
*/

/*  //circular queue with linked lists with struct
*/

/*  //circular queue with linked lists with classes
*/

  int main()
{

    cout << "successfull crated Queues in methods of : \n";


    cout    << "        1] queue with array with struct\n" 
            << "        2] creating queue with array with classes\n" 
            << "        3] queue with linked lists with struct\n" 
            << "        4] queue with linked lists with classes\n" 
            << "        5] circular queue with array with struct\n" 
            << "        6] circular queue with array with classes\n" 
            << "        7] circular queue with linked lists with struct\n" 
            << "        8] circular queue with linked lists with classes\n";

}
