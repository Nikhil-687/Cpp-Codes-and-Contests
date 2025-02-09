#include <bits/stdc++.h>
using namespace std;
int Size = 0;

void Display(int *Heap)
{
    for (int i = 0; i < Size; i++)
    {
        std::cout << Heap[i] << " ";
    }
    cout << "\n";
}

void insert(int *&Heap, int x)
{
    if (Size == 10)
    {
        std::cout << "Memory Limit Expired\n";
        return;
    }
    Heap[Size] = x;
    for (int i = Size; i > 0;)
    {
        int parent = (i - 1) / 2;
        if (Heap[parent] < x)
        {
            swap(Heap[parent], Heap[i]);
        }
        i = (i - 1) / 2;
    }
    Size++;
}

int getMaxandRemove(int *&Heap)
{
    if (Size == 0)
    {
        std::cout << "Address Senitisation: Refered to unknown memory\n";
        exit;
    }
    swap(Heap[Size], Heap[0]);
    for (int i = 0; Size > (2 * i) + 3;)
    {
        if (Heap[i] < max(Heap[2 * i + 1], Heap[2 * i + 2]))
        {
            if (Heap[2 * i + 1] > Heap[2 * i + 2])
            {
                swap(Heap[i], Heap[2 * i + 1]);
                i = 2 * i + 1;
            }
            else if (Heap[2 * i + 1] <= Heap[2 * i + 2])
            {
                swap(Heap[i], Heap[2 * i + 2]);
                i = 2 * i + 2;
            }
        }
        else
        {
            Size--;
            return Heap[Size + 1];
        }
    }
    return -1;
}

int main()
{
    // Heap
    int *Heap = new int[30];
    int x;
    for (int i = 0; i < 10; i++)
    {
        std::cin >> x;
        insert(Heap, x);
    }
    Display(Heap);
    cout << Size << " " << Heap[0] << " \n";
    cout << (getMaxandRemove(Heap) ? to_string(getMaxandRemove(Heap)) : "NOT FOUND") << " \n";
    cout << (getMaxandRemove(Heap) ? to_string(getMaxandRemove(Heap)) : "NOT FOUND") << " \n";
    cout << (getMaxandRemove(Heap) ? to_string(getMaxandRemove(Heap)) : "NOT FOUND") << " \n";
    cout << (getMaxandRemove(Heap) ? to_string(getMaxandRemove(Heap)) : "NOT FOUND") << " \n";
    Display(Heap);
}