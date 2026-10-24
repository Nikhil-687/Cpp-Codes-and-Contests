#include<iostream>
using namespace std;

template <typename T>
class vector{
private:
    T * tempMemory, * memory = new T[1];
    int size = 0, capacity = 1;

public:
    void push_back(T a){
        if(size < capacity){
            memory[size] = a;
            size++;
        }
        else{
            tempMemory = new T[2 * capacity];
            capacity *= 2;
            for(int i = 0;i < size;i++){
                tempMemory[i] = memory[i];
            }
            delete[] memory;
            memory = tempMemory;
            memory[size] = a;
            size++;
        }
    }
    void display(){
        for(int i = 0;i < size;i++){
            cout << memory[i] << " ";
        }
        cout << "\n";
    }
};


int main(){
    vector<long long> a;
    a.push_back(3);
    a.push_back(5);
    a.push_back(7);
    a.push_back(2);
    a.display();
}