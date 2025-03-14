#include <bits/stdc++.h>
// with array

void insert(int A[], int index, int key)
{

    int i = index;
    int temp = key;
    if (index == 0)
    {
        A[0] = key;
    }
    while (i > 0 && A[i / 2] < temp)
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << " ";
    }
}

int *create(std::vector<int> A)
{

    int *a;
    a = new int[20];
    for (int i = 0; i < A.size(); i++)
    {
        insert(a, i, A[i]);
    }
    return a;
}



int deleteRoot(int *A, int n)
{

    int x = A[0];
    int i = 0;
    if(n == 0){std::cout << "Heap underflow\n";goto X;}
    A[0] = A[n-1];
    A[n-1] = 0;
    while((2*i) + 1 < n){
        if(A[2*i] > A[(2*i) + 1]){
            if(A[i] > A[2*i]){goto X;}
            else{
                A[i] = A[2*i];
                i = 2*i;
            }
        }
        else{
            if(A[i] > A[(2*i)+1]){goto X;}
            else{
                A[i] = A[(2*i)+1];
                i = (2*i) + 1;
                }
        }
        
    }
    if(2*i < n){
        if(A[i] < A[2*i])
        {
            A[i] = A[2*i];
            i = 2*i;
        }
    }
    X:;
    return x;
}

int main()
{

    int A[15] = {};
    insert(A, 0, 3);
    insert(A, 1, 4);
    insert(A, 2, 5);
    insert(A, 3, 7);
    insert(A, 4, 8);
    insert(A, 5, 3);
    insert(A, 6, 4);
    insert(A, 7, 4);
    insert(A, 8, 4);
    insert(A, 5 + 4, 9);
    insert(A, 6 + 4, 9);
    insert(A, 7 + 4, 9);
    insert(A, 8 + 4, 9);
    std::vector<int> a;
    a.push_back(4);
    a.push_back(7);
    a.push_back(9);
    a.push_back(2);
    a.push_back(7);
    a.push_back(3);
    a.push_back(6);
    a.push_back(5);
    int *b = create(a);

    display(A, 15);
    std::cout << "\n";
    display(b, 15);
    std::cout << "\n";
    std::cout << deleteRoot(b,8) << "\n"; 
    display(b, 15);
    std::cout << "\n";
    std::cout << deleteRoot(b,7) << "\n"; 
    display(b, 15);
    std::cout << "\n";
    std::cout << deleteRoot(b,6) << "\n";
    display(b, 15);
    std::cout << "\n";    
    std::cout << deleteRoot(b,5) << "\n";
    display(b, 15);
    std::cout << "\n";
    std::cout << deleteRoot(b,4) << "\n";
    display(b, 15);
    std::cout << "\n";

    
}