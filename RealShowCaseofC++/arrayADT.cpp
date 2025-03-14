#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Array1
{
    /* data */
    int size = 10;
    int length = 0;
    int *A;
    // void create(int A[]);
    // void append(int toappend);
    // void Display();
    // void insert(int index, int tobeinserted);
    // void Delete(int index);
    // int search(int tobesearched);
    // int get(int index);
    // void set(int index,int updatedvalue);


}*arr;



void create(Array1*arr2,int A1[])
{

    arr2->A = new int[arr2->size];
    int i = 0;
    arr2->length = 0;
    while(arr2->size > arr2->length && A1[i] != 0)
    {
        
        arr2->A[arr2->length] = A1[i];
        arr2->length++;
        i++;

    }

}


void Display(Array1 arr2)
{

    for(int i = 0;i < arr2.length;i++)
    {

        cout << arr2.A[i] << " ";

    }
    cout << endl;

}


void append(Array1 *arr2,int tobeappended)
{

    if(arr2->length < arr2->size)
    {

        arr2->length++;
        arr2->A[arr2->length - 1] = tobeappended;

    }

}


void insert(Array1 * arr,int index, int x)
{

    if(arr->length < arr->size && index <= arr->length)
    {

        arr->length++;
        for(int i = arr->length;i > index;i++)
        {

            arr->A[i] = arr->A[i-1];

        }

        arr->A[index] = x;

    }

}


void Delete(Array1 * arr,int index)
{

    for(int i = index;i < arr->length - 1;i++)
    {

        arr->A[i] = arr->A[i+1];

    }
    arr->A[arr->length] = 0;
    arr->length--;

}


int search(Array1 * arr,int tobesearched)
{

    int i = 0;
    while(i < arr->length)
    {

        if(arr->A[i] == tobesearched)return i;
        i++;

    }
    return -1;

}


int get(Array1 arr,int index)
{

    return arr.A[index];

}


void Set(Array1 *arr,int index,int updatedvalue)
{

    cout << get(*arr,1) << " \n";
    cout << "set display: ";
    Display(*arr) ;
    arr->A[index] = updatedvalue;

}


pair<pair<Array1,pair<pair<Array1,Array1>,int>>,pair<int,int>> maxmin(Array1 arr)
//x.second.first = max
//x.second.second = min;
//x.first.second.second = avg;
//x.first.first = origional array;
//x.first.second.first.first reversed Array /Remember array is not reversed it is just showing reversed array But it is\;
//x.first.second.first.second = Array(arr>>)\not revesed or shifted if call the function again same output will obtain /;
{

    pair<pair<Array1,pair<pair<Array1,Array1>,int>>,pair<int,int>> x;
    x.second.first = arr.A[0];
    x.second.second = arr.A[0];
    int count = 0;
    int sum = 0;
    for(int i = 0;i < arr.length;i++)
    {

        if(x.second.first < arr.A[i])x.second.first = arr.A[i];
        else if(x.second.second > arr.A[i])x.second.second = arr.A[i];
        count++;
        sum += arr.A[i];

    }
    x.first.second.second = sum/count;
    x.first.first = arr;

    return x;

}


int main ()
{


    int A[] = {2, 3, 4, 5, 6, 7, 8};
    Array1 arr;
    create(&arr,A);
    Display(arr);
    append(&arr,5);
    Display(arr);
    // insert(&arr,3,8);
    Delete(&arr,4);
    Display(arr);
    cout << search(&arr,4) << " ";
    cout << get(arr,4) << endl;
    Set(&arr,4,9);
    Display(arr);
    return 0;

}