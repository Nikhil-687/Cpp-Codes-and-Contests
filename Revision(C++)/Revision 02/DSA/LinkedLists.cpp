#include <bits/stdc++.h>

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
Node *hea = NULL;

void insertTail(int x)
{
    if (head == NULL)
    {
        Node *p = new Node;
        p->data = x;
        p->next == NULL;
        head = p;
    }
    else
    {
        Node *t = head;
        while (t->next != NULL)
            t = t->next;
        Node *p = new Node;
        p->data = x;
        p->next = NULL;
        t->next = p;
    }
}
void insertTail(Node *q, int x)
{
    if (q == NULL)
    {
        Node *p = new Node;
        p->data = x;
        p->next == NULL;
        q = p;
    }
    else
    {
        Node *t = q;
        while (t->next != NULL)
            t = t->next;
        Node *p = new Node;
        p->data = x;
        p->next = NULL;
        t->next = p;
    }
}

void create(std::vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        insertTail(A[i]);
    }
}

void create(Node *t, std::vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        insertTail(t, A[i]);
    }
}

void insertHead(int x)
{
    if (head == NULL)
    {
        Node *p = new Node;
        p->data = x;
        p->next == NULL;
        head = p;
    }
    else
    {
        Node *t = head;
        Node *p = new Node;
        head = p;
        p->data = x;
        p->next = t;
    }
}

void display(Node *l)
{
    Node *t = l;
    while (t != NULL)
    {
        std::cout << t->data << " ";
        t = t->next;
    }
    std::cout << std::endl;
}
void ReverseDisplay(Node *p)
{
    Node *t = p;
    if (t != NULL)
    {
        ReverseDisplay(t->next);
        std::cout << t->data << " ";
    }
    if (t == head)
        std::cout << std::endl;
}
void RecursiveDisplay(Node *p)
{
    Node *t = p;
    if (t != NULL)
    {
        std::cout << t->data << " ";
        RecursiveDisplay(t->next);
    }
    else
        std::cout << std::endl;
}

int countNodes(Node *l)
{
    Node *t = l;
    int count = 0;
    if (l == NULL)
        return 0;
    while (t != NULL)
    {
        count++;
        t = t->next;
    }
    return count;
}

int RcountNodes(Node *l)
{
    Node *t = l;
    int count = 0;
    if (l == NULL)
        return 0;
    if (t != NULL)
    {
        count = 1 + RcountNodes(t->next);
    }
    return count;
}

int Sum(Node *l)
{
    Node *t = l;
    int sum = 0;
    if (l == NULL)
        return 0;
    while (t != NULL)
    {
        sum += t->data;
        t = t->next;
    }
    return sum;
}

int RSum(Node *l)
{
    Node *t = l;
    int sum = 0;
    if (l == NULL)
        return 0;
    if (t != NULL)
    {
        sum = t->data + RSum(t->next);
    }
    return sum;
}

int Max(Node *t)
{
    if (t == NULL)
    {
        return 0;
    }
    int max = t->data;
    while (t != NULL)
    {
        if (max < t->data)
        {
            max = t->data;
        }
        t = t->next;
    }
    return max;
}
int Rmax(Node *t)
{
    if (t == NULL)
    {
        return 0;
    }
    int max = t->data;
    int x = Rmax(t->next);
    if (x > max)
    {
        max = x;
    }
    return max;
}
Node *Lsearch(Node *t, int key)
{
    Node *p = new Node;
    if (t == NULL)
    {
        std::cout << "Not Found\n";
        exit;
    }
    int count = 0;
    while (t)
    {
        if (t->data == key)
        {
            std::cout << "Found at: " << count + 1 << std::endl;
            p = t;
            // p->next = NULL;
            return p;
        }
        count++;
        t = t->next;
    }
    std::cout << "Not Found\n";
    exit;
    return p;
}
Node *Rsearch(Node *t, int key)
{
    Node *p = new Node;
    if (t == NULL)
    {
        std::cout << "Not Found\n";
        exit;
    }
    if (t)
    {
        if (t->data == key)
        {
            p = t;
            p->next = NULL;
            return p;
        }
        return Rsearch(t->next, key);
    }
    std::cout << "Not Found\n";
    exit;
    return p;
}

void insert(Node *t, int index, int x)
{
    int i = 0;
    if (index < 0)
    {
        std::cout << "Cant insert at negetive index" << std::endl;
        exit;
    }
    if (index == 0)
    {
        if (t == NULL)
        {
            Node *p = new Node;
            p->data = x;
            p->next == NULL;
            t = p;
        }
        else
        {
            Node *t2 = t;
            Node *p = new Node;
            t = p;
            p->data = x;
            p->next = t2;
        }
    }
    while (t->next && i < index - 1)
    {
        t = t->next;
        i++;
    }
    if (t->next)
    {
        Node *p = new Node;
        p->data = x;
        p->next = t->next;
        t->next = p;
    }
    else
        std::cout << "Index Greater than size of List\n";
}

void sortedInsert(Node *t, int x)
{
    if (t == NULL)
    {
        insert(t, 0, x);
        return;
    }
    if (!(t->next))
    {
        if (t->data > x)
        {
            insert(t, 0, x);
            return;
        }
        else
        {
            insert(t, 1, x);
            return;
        }
    }
    while (t->next && t->next->data < x)
    {
        t = t->next;
    }
    if (!t->next)
    {
        Node *p = new Node;
        p->data = x;
        p->next = NULL;
        t->next = p;
    }
    else
    {
        Node *p = new Node;
        p->data = x;
        p->next = t->next;
        t->next = p;
    }
}

// DELETION FROM LINKED LIST
Node *deleteTail(Node *t)
{
    if (!t)
    {
        std::cout << "Empty List\n";
        return NULL;
    }
    if (!(t->next))
    {
        Node *p = t;
        t = NULL;
        return p;
    }
    while (t->next->next)
    {
        t = t->next;
    }
    Node *p = t;
    t->next = NULL;
    return p->next;
}

Node *deleteHead(Node *&t)
{
    Node *p = t;
    if (!t)
    {
        std::cout << "Empty List\n";
        return NULL;
    }
    t = p->next;
    return p;
}

Node *Delete(Node *t, int index) { return t; }

bool isSorted(Node *t)
{
    if (t == NULL || t->next == NULL)
        return 1;
    while (t->next->next != NULL)
    {
        if (t->next->data < t->data)
            return 0;
        t = t->next;
    }
    if (t->next->data < t->data)
        return 0;
    return 1;
}

void RemoveDuplicates(Node *&t)
{
    Node *p = t;
    if (!t)
        return;
    if (!t->next)
    {
        return;
    }
    std::vector<int> a;
    // a.push_back(t->data);
    while (t)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == t->data)
            {
                deleteHead(t);
                goto X;
            }
        }
        a.push_back(t->data);
        t = t->next;
    X:;
    }
    t = p;
    for (int i = 0; i < a.size(); i++)
    {
        t->data = a[i];
        if (i != a.size() - 1)
            t = t->next;
    }
    t->next = NULL;
    t = p;
}

void Reverse(Node *head)
{
}

void concate(Node *a, Node *b)
{
    Node *t = b;
    while (t)
    {
        insertTail(t, b->data);
        b = b->next;
    }
}

bool isLoop(Node *t)
{
    std::map<Node *, int> a;
    Node *p = t;
    while (p != NULL)
    {
        if (a[p] == 1)
            return 1;
        else
            a[p] = 1;
        p = p->next;
    }
    return 0;
}

void makeItCircular(Node *t)
{
    Node *p = t;
    while (p->next)
    {
        p = p->next;
    }
    p->next = t;
}

void removeLoop(Node *t)
{
    if (!isLoop(t))
        return;
    std::map<Node *, int> a;
    Node *p = t;
    while (1)
    {
        if (a[p->next] == 1)
        {
            p->next = NULL;
            return;
        }
        else
        {
            a[p] = 1;
            p = p->next;
        }
    }
    return;
}
void displayLoop(Node *t)
{
    std::map<Node *, int> a;
    Node *p = t;
    while (p != NULL)
    {
        if (a[p] == 1)
        {
            std::cout << "\b\b ..." << std::endl;
            return;
        }
        else
        {
            a[p] = 1;
            std::cout << p->data << ", ";
        }
        p = p->next;
    }
    std::cout << "\b\b.\n";
    return;
}

int countInLoop(Node *t)
{
    std::map<Node *, int> a;
    Node *p = t;
    int count = 0;
    while (p != NULL)
    {
        if (a[p] == 1)
        {
            return count;
        }
        else
        {
            a[p] = 1;
            count++;
        }
        p = p->next;
    }
    return count;
}

void insertInLoop(Node *&t, int index, int x)
{
    if (index < 0)
    {
        std::cout << "can't Insert at negative index\n";
    }
    if (!isLoop(t))
    {
        insert(t, index, x);
    }
    if (index == 0)
    {
        std::map<Node *, int> a;
        Node *p = t;
        Node *q = new Node;
        q->data = x;
        q->next = t;
        t = q;
        int count = 0;
        while (p != NULL)
        {
            if (a[p->next] == 1)
            {
                p->next = q;
                return;
            }
            else
            {
                a[p] = 1;
                count++;
            }
            p = p->next;
        }
        return;
    }
    index = index % countInLoop(t);
    if (index == 0)
    {
        std::map<Node *, int> a;
        Node *p = t;
        while (p != NULL)
        {
            if (a[p->next] == 1)
            {
                Node *q = new Node;
                q->data = x;
                q->next = p->next;
                p->next = q;
                return;
            }
            else
            {
                a[p] = 1;
            }
            p = p->next;
        }
        return;
    }
    Node *p = t;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    Node *q = new Node;
    q->data = x;
    q->next = p->next;
    p->next = q;
    return;
}

void deleteInLoop(Node *&t, int index)
{
    if (index < 0)
    {
        std::cout << "can't Delete at negative index\n";
    }
    if (!isLoop(t))
    {
        Delete(t, index);
    }
    index = index % countInLoop(t);
    if (index == 0)
    {
        ;
        Node *p = t;
        std::map<Node *, int> a;
        while (p->next != NULL)
        {
            if (a[p->next] == 1)
            {
                p->next = p->next->next;
                goto X;
            }
            else
            {
                a[p] = 1;
            }
            p = p->next;
        }
    X:;
        t = t->next;
        return;
    }
    Node *p = t;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    Node *q = p->next;
    p->next = p->next->next;
    free(q);
    return;
}

void RemoveDuplicatesInLoop(Node *&t)
{
    Node *p = t;
    std::map<Node *, int> amap;
    if (!t)
        return;
    if (!t->next)
    {
        return;
    }
    std::vector<int> a;
    while (p->next != NULL)
    {
        if (amap[p] == 1)
        {
            return;
        }
        else
        {
            amap[p] = 1;
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == p->data)
            {
                deleteInLoop(p, 0);
                goto X;
            }
        }
        a.push_back(t->data);
        p = p->next;
    X:;
    }
    return;
}

// Doubly Linked List

struct Noded
{
    int data;
    Noded *prev;
    Noded *next;
};
Noded *headd;

template <class T>
bool isLoopD(T *t)
{
    std::map<T *, int> a;
    T *p = t;
    while (p != NULL)
    {
        if (a[p] == 1)
            return 1;
        else
            a[p] = 1;
        p = p->next;
    }
    return 0;
}

template <class T>
int countInLoopD(T *t)
{
    std::map<T *, int> a;
    T *p = t;
    int count = 0;
    while (p != NULL)
    {
        if (a[p->next] == 1)
        {
            count++;
            return count;
        }
        else
        {
            a[p] = 1;
            count++;
        }
        p = p->next;
    }
    return count;
}

template <class T>
void insertD(T *&t, int index, int x)
{

    if (index < 0)
    {
        std::cout << "Cant insert at negative index\n";
    }
    if (index == 0)
    {
        if (t == NULL)
        {
            T *q = t;
            q->data = x;
            q->next = NULL;
            q->prev = NULL;
            t = q;
        }
        else
        {
            T *q = t;
            q->data = x;
            q->next = t;
            q->prev = NULL;
            t->prev = q;
            t = q;
        }
    }
    int i = 0;
    T *p = t;
    while (i < index - 1 && p)
    {
        p = p->next;
    }
    if (p)
    {
        if (p->next == NULL)
        {
            T *q = new T;
            q->data = x;
            q->next = p->next;
            p->next = q;
            q->prev = p;
        }
        else
        {
            T *q = new T;
            q->data = x;
            q->next = p->next;
            q->next->prev = q;
            p->next = q;
            q->prev = p;
        }
    }
    else
        std::cout << "Index Out of Bonds\n";
}

void insertLoopD(Noded *t, int index, int x)
{
    if (index < 0)
    {
        std::cout << "can't Insert at negative index\n";
    }
    if (!isLoopD(t))
    {
        insertD(t, index, x);
    }
    if (index == 0)
    {
        Noded *p = t;
        Noded *q = new Noded;
        q->data = x;
        q->next = t;
        t->next = q;
        return;
    }
    index = index % countInLoopD(t);
    if (index == 0)
    {
        std::map<Noded *, int> a;
        Noded *p = t;
        while (p != NULL)
        {
            if (a[p->next] == 1)
            {
                Noded *q = new Noded;
                q->data = x;
                q->next = p->next;
                p->next = q;
                return;
            }
            else
            {
                a[p] = 1;
            }
            p = p->next;
        }
        return;
    }
    Noded *p = t;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    Noded *q = new Noded;
    q->data = x;
    q->next = p->next;
    p->next = q;
    return;
}
void createDoubly(Noded *t, std::vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        int x = countInLoopD(t);
        std::cout << x << std::endl;
        insertLoopD(t, x, a[i]);
    }
}

template <class T>
void displayLoopD(T *t)
{
    std::map<T *, int> a;
    T *p = t;
    while (p != NULL)
    {
        if (a[p] == 1)
        {
            std::cout << "\b\b ..." << std::endl;
            return;
        }
        else
        {
            a[p] = 1;
            std::cout << p->data << ", ";
        }
        p = p->next;
    }
    std::cout << "\b\b.\n";
    return;
}

int main()
{
    std::vector<int> A = {2, 3, 4, 5, 6, 7};
    std::vector<int> B = {2, 3, 4, 5, 6, 7};
    create(A);
    display(head);
    insertTail(8);
    insertHead(1);
    insertTail(9);
    display(head);
    ReverseDisplay(head);
    RecursiveDisplay(head);
    std::cout << RcountNodes(head) << std::endl;
    std::cout << RSum(head->next) << std::endl;
    std::cout << Rmax(head) << std::endl;
    std::cout << Lsearch(head->next, 6) << std::endl;
    display(head);
    sortedInsert(head, 5);
    sortedInsert(head, 2);
    sortedInsert(head, 2);
    sortedInsert(head, 9);
    sortedInsert(head, 10);
    display(head);
    deleteTail(head);
    display(head);
    deleteHead(head);
    // insertTail(8);
    display(head);
    std::cout << "List is sorted or not: " << isSorted(head) << std::endl;
    RemoveDuplicates(head);
    display(head);
    if (isLoop(head))
    {
        std::cout << "Head Contains a loop\n";
    }
    else
    {
        std::cout << "Head is a linear linked list i.e, it doesnot contain loop\n";
    }
    makeItCircular(head);
    if (isLoop(head))
    {
        std::cout << "Head Contains a loop\n";
    }
    else
    {
        std::cout << "Head is a linear linked list i.e, it doesnot contain loop\n";
    }
    displayLoop(head);
    std::cout << countInLoop(head) << std::endl;
    insertInLoop(head, 0, 1);
    displayLoop(head);
    std::cout << countInLoop(head) << std::endl;
    insertInLoop(head, 9, 10);
    displayLoop(head);
    insertInLoop(head, 2, 2);
    displayLoop(head);
    deleteInLoop(head, 0);
    displayLoop(head);
    deleteInLoop(head, 5);
    displayLoop(head);
    RemoveDuplicatesInLoop(head);
    std::cout << "removed Duplicates from the loop: ";
    displayLoop(head);
    removeLoop(head);
    if (isLoop(head))
    {
        std::cout << "Head Contains a loop\n";
    }
    else
    {
        std::cout << "Head is a linear linked list i.e, it doesnot contain loop\n";
    }
    displayLoop(head);
    display(head);
    std::cout << countInLoop(head) << std::endl;

    createDoubly(headd, A);
    displayLoopD(headd);
    return 0;
}


// Doubly Linked List