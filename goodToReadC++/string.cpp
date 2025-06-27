#include<bits/stdc++.h>
using namespace std;

// String ADT
class String
{
    public:
        char * str;
        int size;
        int max_size = 1000000001;
        String(){
            size = 0;
        }
        String(char * ch){
            size = strlen(ch);
            str = ch;
        }
        String(int n){
            if(n > max_size){size = max_size;}
            else size = n;
            str = new char[size];
        }
        String(int n, char * ch){
            if(n > max_size){size = max_size;}
            else size = n;
            str = new char[size];
            for(int i = 0;i < n;i++){
                if(ch[i] != 0){
                    str[i] = ch[i];
                }else {goto X;size = i-1;}
            }
            X:;
        }
        char at(int x){
            if(x >= size)return -1;
            return str[x];
        }
        void push_back(char x)
        {
            if(size < max_size){
                size++;
                str[size-1] = x;
            }
            else cout << "array is full\n";
        }
        void Insert(char x)
        {
            if(size < max_size){
                size++;
                str[size-1] = x;
            }
            else cout << "array is full\n";
        }
        void Insert(int index,char x)
        {
            if(size < max_size){
                size++;
                if(index < size){
                    for(int i = size - 2;i >= index;i--)
                    {

                        str[i+1] = str[i];

                    }
                    str[index] = x;
                }
                
            }
            else cout << "array is full\n";
        }
        void display(){
            for(int i = 0;i < size;i++){
                cout << str[i] << " ";
            }
            cout << '\n';
        }
        char pop_back()
        {
            char x = '0';
            if(size == 0){cout << "empty array cant be poped\n";return x;}
            size--;
            x = str[size];
            return x;
        }char Delete(int index)
        {
            char x = '0';
            if(size == 0){cout << "empty array cant be poped\n";return x;}
            size--;
            x = str[index];
            for(int i = index;i < size;i++){
                str[i] = str[i+1];
            }
            return x;
        }char Delete()
        {
            int index = size - 1;
            char x = '0';
            if(size == 0){cout << "empty array cant be poped\n";return x;}
            size--;
            x = str[index];
            for(int i = index;i < size;i++){
                str[i] = str[i+1];
            }
            return x;
        }
        bool isempty(){
            return !size;
        }
        bool isfull(){
            if(size == max_size)return 1;
            return 0;
        }char begin(){
            return str[0];
        }
        char end(){
            return str[size-1];
        }
        vector<int> lsearch(char x){
            vector<int> indexes;
            for(int i = 0;i < size;i++){
                if(str[i] == x)indexes.push_back(i);
            }
            return indexes;
        }
        void set(int index, char x){
            str[index] = x;
        }
        void reverse(){
            int i = 0, j = size - 1;
            for( i, j ;i < j;i++,j--){
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }

};


int main(){
    
    char A[] = "NIKHIL PATIDAR ";
    String arr(15,A);
    arr.push_back('6');arr.Insert('8');arr.Insert('7');//
    arr.display();
    cout << arr.size << " " << arr.at(0) << " " << arr.at(7) << " " << arr.pop_back() << " " << arr.pop_back() << " " << arr.pop_back() << " " << arr.begin() << " " << arr.end() <<  endl;
    //arr.Delete(1);
    arr.display();
    for(int i = 0;i < arr.lsearch('I').size();i++){cout << arr.lsearch('I').at(i) << " ";}cout << endl;
    char A2[] = "nikhil patidar";String arr2(14,A2);
    arr2.display();
    // merge_arrays(&arr,arr2);
    cout << "arr1: ";arr.display();
    cout << "arr2: ";arr2.display();
    //arr | arr2;arr.display();arr2 & arr;arr2.display();
    return 0;
    
}