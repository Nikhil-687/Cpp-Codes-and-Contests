#include<bits/stdc++.h>

template<class T>
T Max(T a, T b){
    return (a>b)?a:b;
}

template<class T, class R>
R Sum(T a, R b, T a2, R b2, R b3){
    return a+b+a2+b2+b3;
}

template<class T>
class Stack{
    T a[10];
    int top;
    public:
        void push(T a);
        T pop();
};

template<class S>
void Stack<S>::push(S a){
    // 
}

template<class T>
T Stack<T>::pop(){
    // 
}



int main(){
    int a = Max(3,4);
    float a2 = Max(3.4,4.5);
    std::cout << a << " " << a2 << std::endl;
    float sum = Sum(3,3.4,4,4.5,5.6);
    std::cout << sum << std::endl;

    Stack<int> S;
    Stack<float> S2;
    

}