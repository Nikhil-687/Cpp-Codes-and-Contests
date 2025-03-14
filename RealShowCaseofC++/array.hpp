#include<bits/stdc++.h>
using namespace std;
/*
//Array ADT
class Array{
   int size;
   int *A;
   public:

      Array(int s,int A2[])
      {
        int *A = new int[s];
        for(int i = 0;A2[i] != 0;i++){*(A+i) = A2[i];}
        for(int i = 0;*(A+i) != 0;i++){cout << *(A+i) << " ";}
      };

      int at(int index)
      {
        return *(A+index);
      }

    //   void push(int tobepushed)
    //   {
    //      int *b = new int [size+1];
    //      for(int i = 0;i < size;i++)
    //      {

    //         b[i] = A[i];

    //      }b[size] = tobepushed;
    //      A = b;
    //   }
      
};

int main()
{

   int A[] = {3,4,5,6,7};
   Array ar(5,A); 
   cout << ar.at(0) << endl;

}
*/

bool isSorted(int size, int A[])
{
    for(int i = 1;i < size;i++){
        if(A[i] > A[i-1]){}
        else return 0;
    }
    return 1; 
}





// Array ADT
class Array
{

    
    public:
        int max_size = 1000000001;
        int *A; 
        int size;
        Array(){size = 0;}
        Array(int s){
            if(s <= max_size)
                size = s;
            else size = max_size;
        }Array(int * A1){
            A = A1;
        }Array(int s, int * A1)
        {
            size = s;
            A = A1;
        }
        Array(int s, int max_s, int * A1)
        {
            size = s;
            max_size = max_s;
            A = A1;
            if(size > max_size){
                size = max_size;
            }

        }

        int at(int x){
            if(x >= size)return -1;
            return A[x];
        }
        void push_back(int x)
        {
            if(size < max_size){
                size++;
                A[size-1] = x;
            }
            else cout << "array is full\n";
        }
        void Insert(int x)
        {
            if(size < max_size){
                size++;
                A[size-1] = x;
            }
            else cout << "array is full\n";
        }
        void Insert(int index,int x)
        {
            if(size < max_size){
                size++;
                if(index < size){
                    for(int i = size - 2;i >= index;i--)
                    {

                        A[i+1] = A[i];

                    }
                    A[index] = x;
                }
                
            }
            else cout << "array is full\n";
        }
        void display(){
            for(int i = 0;i < size;i++){
                cout << A[i] << " ";
            }
            cout << '\n';
        }
        int pop_back()
        {
            int x = -1;
            if(size == 0){cout << "empty array cant be poped\n";return x;}
            size--;
            x = A[size];
            return x;
        }int Delete(int index)
        {
            int x = -1;
            if(size == 0){cout << "empty array cant be poped\n";return x;}
            size--;
            x = A[index];
            for(int i = index;i < size;i++){
                A[i] = A[i+1];
            }
            return x;
        }
        bool isempty(){
            return !size;
        }
        bool isfull(){
            if(size == max_size)return 1;
            return 0;
        }int begin(){
            return A[0];
        }
        int end(){
            return A[size-1];
        }
        bool issorted()
        {

            for(int i = 1;i < size;i++){
                if(A[i] > A[i-1]){}
                else return 0;
            }
            return 1;

        }
        vector<int> lsearch(int x){
            vector<int> indexes;
            for(int i = 0;i < size;i++){
                if(A[i] == x)indexes.push_back(i);
            }
            return indexes;
        }
        vector<int> bsearch(int x){
            if(isSorted(size,A))
            {
                
                vector<int> indexes;
                int l = 0, h = size - 1, mid = (l+h)/2;
                while(A[mid] != x)
                {

                    if(A[mid] > x){h = mid;}
                    else if(A[mid] < x){l = mid;}

                }
                while(A[mid] == x){mid = mid - 1;}
                mid++;
                while(A[mid] == x){indexes.push_back(mid);mid++;}
                return indexes;

            }
            else{
                cout << "Going Linear Search as array is not sorted\n";
                vector<int> indexes;
                for(int i = 0;i < size;i++){
                    if(A[i] == x)indexes.push_back(i);
                }
                return indexes;
            }
        }
        void set(int index, int x){
            A[index] = x;
        }
        int max(){
            int m = -2147483647;
            for (int i = 0; i < size; i++)
            {
                if(m < A[i])m = A[i];
            }
            return m;
        }
        int min(){
            int m = 2147483648;
            for (int i = 0; i < size; i++)
            {
                if(m > A[i])m = A[i];
            }
            return m;            
        }
        void reverse(){
            int i = 0, j = size - 1;
            for( i, j ;i < j;i++,j--){
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
        void operator|(Array nums1)
        {
            //M1
            for(int i = 0;i < nums1.size;i++){
                for(int j = 0;j < size;j++){
                    if(nums1.A[i] == A[j]){goto Y;}
                }
                size++;
                A[size-1] = nums1.A[i];
                Y:;
            }
            // //M2{-1000000001 < nums1.A[i], A[i] < 1000000001}
            // int H[1000000001] = {0};
            // vector<int> primH;
            // for(int i = 0;i < nums1.size;i++){
            //     H[nums1.A[i]]++;
            //     primH.push_back(nums1.A[i]);
            // }
            // for(int i = 0;i < size;i++){
            //     H[A[i]]++;
            //     primH.push_back(A[i]);
            // }
            // for(int i = 0,k = 0;i < primH.size();i++){
            //     if(H[primH.at(i)] == 1){A[k] = primH.at(i);k++;}
            // }these could result stack overflow
        

        }
        void operator&(Array nums1)
        {

            int k = 0;
            for(int i = 0;i < nums1.size;i++){
                for(int j = 0;j < size;j++){
                    if(nums1.A[i] == A[j]){goto Y;}
                }
                if(0){
                    Y:;
                    A[k] = nums1.A[i];
                    k++;
                }
            }
            size = k;

        }

};

// sort , set operations 

void merge_arrays(Array *arr1, Array arr2)
{

    int i = arr1->size;
    int j;
    for(j = 0;j < arr2.size;j++)
    {

        if(arr1->size < arr1->max_size){
            arr1->size++;
            arr1->A[i + j] = arr2.A[j];    
        }

    }arr1->size = i + j;

}

// int main(){
    
//     int A[] = {6,7,8,9,1,2,3,4,5,6,7};
//     Array arr(8,A);
//     arr.push_back(9);arr.Insert(9,10);//
//     cout << arr.size << " " << arr.at(0) << " " << arr.at(8)  << " " << arr.pop_back() << " " << arr.pop_back() << " " << arr.begin() << " " << arr.end() <<  endl;
//     arr.Insert(9);arr.Delete(1);
//     arr.display();
//     for(int i = 0;i < arr.lsearch(5).size();i++){cout << arr.lsearch(5).at(i) << " ";}cout << endl;
//     int A2[] = {2,3,4,5,6,7,8};Array arr2(7,A2);
//     arr2.display();
//     // merge_arrays(&arr,arr2);
//     cout << "arr1: ";arr.display();
//     cout << "arr2: ";arr2.display();
//     arr | arr2;arr.display();arr2 & arr;arr2.display();
//     return 0;
    
// }