#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    int size;
    int *s;
};

void push(Stack *st,int tobepushed)
{
    

    if(st->top + 1 != st->size){
        st->top++;
        st->s[st->top] = tobepushed;
        cout << "pushed " << tobepushed << " to top of stack: Successfulled\n";
    }
    else {
        cout << "Stack Overflow\ndo You want to fix by replacing this element by any peak position(Y/n): ";
        char ch;
        cin >> ch;
        if(ch == 'Y'){
            cout << "Enter Peak Position : ";
            int x;
            cin >> x;
            int index = st->size - x ;
            st->s[index] = tobepushed;
            if(x <= st->size){
                
                cout << "pushed " << tobepushed << " to " << x << " position from stack: Successfulled\n";
            }else{
                
                cout << "You could not give positin greater than the size of stack do you want to give new position(Y/n): ";
                char ch;
            
                cin >> ch;
                if(ch == 'Y'){
                    cout << "Enter Peak Position : ";
                    int x;
                    cin >> x;
                    int index = st->top - x ;
                    st->s[index] = tobepushed;
                    if(index < st->size){
                        cout << "pushed " << tobepushed << " to " << x << " position from stack: Successfulled\n";
                    }else{
                        cout << "pushed " << tobepushed << " to " << x << " position from stack: UnSuccessed\n";
                    }
                }
            }
        }else cout << "Push function terminated due to Stack Over Flow\n";
    }

}
int main(){
    Stack st;
    cin >> st.size;
    st.s = new int[st.size];
    st.top = -1;

    Stack *stt = &st;
    push(stt,1);
    push(stt,2);
    push(stt,3);
    push(stt,4);
    push(stt,5);

}