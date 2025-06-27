#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int A[],int n)
{

    for(int i = 0;i < n-1;i++)
    {
        int flag = 0;
        for(int j = 0;j < n-1-i;j++)
        {

            if(A[j] > A[j+1]){
                swap(A[j],A[j+1]);
                flag = 1;
            }

        }
        if(flag == 0)break;

    }
    
}

void insersions_o_r_t(int A[],int n)
{

    for(int i = 1;i < n;i++)
    {

        int x = A[i];
        for(int j = i-1;j > -1 && A[j] > x;j--)
        {

            {
                A[j+1] = A[j];
                A[j] = x;
            }

        }

    }

}

void selections_o_r_t(int A[],int n)
{

    for(int i = 0;i < n;i++)
    {

        int k;
        int x = A[i];
        for(int j = k = i;j < n;j++)
        {

            if(A[j] < A[k])
            {
                k = j;
            }

        }
        if(A[k] < A[i])
            swap(A[k],A[i]);

    }

}




int main(){
    int A[] = {24, 5, 6, 7, 3, 3, 8};
    Bubble_sort(A,7);
    for(int i = 0;i < 7;i++){
        cout << A[i] << " ";
    }
    cout << endl;
    int B[] = {24, 5, 6, 7, 3, 3, 8};
    insersions_o_r_t(B,7);
    for(int i = 0;i < 7;i++){
        cout << B[i] << " ";
    }
    cout << endl;
    int C[] = {24, 5, 6, 7, 3, 3, 8};
    selections_o_r_t(C,7);
    for(int i = 0;i < 7;i++){
        cout << C[i] << " ";
    }
    cout << endl;
    int D[] = {24, 5, 6, 7, 3, 3, 8};
    // quicks_o_r_t(D,7);
    for(int i = 0;i < 7;i++){
        cout << D[i] << " ";
    }
    cout << endl;
    
}