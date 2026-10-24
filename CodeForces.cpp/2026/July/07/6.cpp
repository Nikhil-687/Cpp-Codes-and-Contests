#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// we will be storing each token of stack as a object of this struct which support both int and char at same time
struct Token{
    bool isOperation = 0;
    int value = 0;
    char operation = '+';
    Token(int x){
        value = x;
    }
    Token(char x){
        isOperation = 1;
        operation = x;
    }
};

// implementing stack class which obeys FILO(first in last out) for push and pop operations(as expected in a stack)
class Stack{
    private:
        // declared a vector with name tokens, which will be storing all the data and is kepth hidden.
        vector<Token *> tokens;
        int sz = 0;
    public:
        Stack(vector<string> & a){
            for(string s : a){
                push(s);
            }
        }
        // push method is declare so to add a element to the array tokens
        void push(string token);
        // pop method is declare so toremove the top element from the memory
        void pop();
        // evaluate method is ment to evalute result of exprasion and array tokens is considered as a valid postfix expression by input
        // for example tokens could look like 2 3 +
        int evaluate();
};

/* Stack Methods*/
void Stack::push(string s){
    Token *t;
    if(s[0] >= '0' && s[0] <= '9'){
        t = new Token(stoi(s));
    }
    else{
        t = new Token(s[0]);
    }
    tokens.push_back(t);
    sz++;
}
void Stack::pop(){
    if(sz == 0){
        cout << "stack Underflow\n";
        return ;
    }
    Token *x = tokens[sz-1];
    delete(x);
    sz--;
    tokens.pop_back();
}
int Stack::evaluate(){
    // given the data in tokens is valid whenever evalute() is called
    // for(auto token : tokens){
    //     if(token->isOperation){
    //         cout << token->operation << " ";
    //     }
    //     else{
    //         cout << token->value << " ";
    //     }
    // }
    // cout << "\n";
    int ans = 0;
    unique_ptr<int> last_index = std::make_unique<int>(0);
    for(auto token : tokens){
        if(!token->isOperation){
            last_index = std::make_unique<int>(last_index.get() + 1);
            while(tokens[*last_index]->isOperation){
                last_index = std::make_unique<int>(last_index.get() + 1);
            }
        }
        else{
            int b = tokens[*last_index - 1]->value;
            int a = tokens[*last_index - 2]->value;
            if(token->operation == '+'){
                ans = a + b;
            }
            else if(token->operation == '-'){
                ans = a - b;
            }
            else if(token->operation == '*'){
                ans = a * b;
            }
            else if(token->operation == '/'){
                ans = a / b;
            }
            last_index = std::make_unique<int>(last_index.get() - 1);
            while(!tokens[*last_index]->isOperation){
                last_index = std::make_unique<int>(last_index.get() - 1);
            }
        }
    }
    return ans;
}

int main(){ 
    int n;
    cin >> n;
    vector<string> input(n);
    for(int i = 0;i < n;i++){
        cin >> input[i];
    }
    Stack * st = new Stack(input);
    cout << st->evaluate() << "\n";
    return 0;
}