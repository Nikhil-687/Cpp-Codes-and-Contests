#include<bits/stdc++.h>
using namespace std;


int add(int a){

}
char add(char x){}

int main()
{

    /*code*/
    int A[10] = {0};
    A[2] = 1;
    cout << A[2] << endl;
    2[A] = 3;
    cout << A[2] << endl;
    *(A+2) = 5;
    cout << A[2] << endl;
    *(A+2) += 2;
    cout << A[2] << endl;

    int *p = A;
    p[1] = 2;
    cout << A[1] << endl;
    1[p] = 3;
    cout << p[1] << endl;
    *(p+1) = 5;
    cout << 1[p] << endl;
    *(1+p) += 2;
    cout << p[1] << endl;

    // int q[10];
    // for(int i = 0;i < 100 ;i++)cout << i[q] << endl;

    int M[10][20];
    5[M[8]] = 4;
    cout << "MATRIX: " << 5[8[M]] << endl;

    cout << &p << endl;
    return 0;

}