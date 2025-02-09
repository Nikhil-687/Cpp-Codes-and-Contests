#include <bits/stdc++.h>

int main()
{

    /*code*/
    // Initialisation
    int a[8] = {};
    int a1[] = {};
    int a2[5];
    // a2[0] = 9; ...

    // Adding all elements
    int A[5] = {2, 3, 4, 5, 6};
    int sum = 0;
    for (int i : A)
    {
        sum += i;
    }
    std::cout << "Sum is: " << sum << std::endl;

    // finding max element
    int max = A[0];
    for (int i : A)
    {
        if (i > max)
            max = i;
    }
    std::cout << "Max  is : " << max << std ::endl;

    // Length
    int count = 0;
    for (int i : A)
    {
        count++;
    }
    int n = count;
    std::cout << "Length is: " << count << std::endl;

    // Linear Search
    int key;
    std::cout << "Key : ";
    std::cin >> key;
    count = 0;
    for (int i : A)
    {
        if (i == key)
        {
            std::cout << "is at index: "<< count << std::endl;
            break;
        }
        count++;
    }

    // binary search
    int l = 0, h = n - 1, mid = (l + h) / 2;
    while (l < h)
    {
        if (A[mid] == key)
        {
            std::cout << "is at index: " << mid << std::endl;
            break;
        }
        else if (A[mid] > key)
        {
            h = mid;
            mid = (l + h) / 2;
        }
        else
        {
            l = mid;
            mid = (l + h) / 2;
        }
        if (l == h)
        {
            std::cout << "key Does not exists.";
            break;
        }
    }

    // the name of array
    int B[8] = {6, 2, 6, 8, 4, 8, 8};
    std::cout << B << std::endl; // prints the adress of B[0]

    // pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            std::cout << '*' << ' ';
        }
        std::cout << std::endl;
    }

    // Matrice and multidimentional array

    // Average 
    int A[5] = {2, 3, 4, 5, 6};
    int sum = 0,avg;
    for (int i : A)
    {
        sum += i;
    }
    avg = sum / n;
    std::cout << "Average is: " << avg << std::endl;
    
    return 0;
}