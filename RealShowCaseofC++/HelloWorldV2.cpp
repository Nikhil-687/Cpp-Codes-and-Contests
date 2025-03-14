#include<bits/stdc++.h>
using namespace std;

// dont start reading here jump to main function and ther on call of this function refer here.

string func(string a, int & count){
    string hello = " Hello World\n";
    cout << count++ << " Hello World\n" << count++ << hello;
    printf("%d Hello World\n", count++);
    printf("%d%s", count++, " Hello World\n");
    cout << count++;
    puts(" Hello World");

    string* ptr = &hello;
    cout << count++ << *ptr;

    string** ptrptr = &ptr;
    cout << count++ << **ptrptr;
    cout << count++ << a ;

    cout << count++;

    return a;
    // keeping it very sort yaha par printf aur puts laga ke bhi a print ho sakta tha
}


struct helloWorld
{

    string hello = " Hello World\n";
    string func2(string a, int & count){
        string hello = " Hello World\n";
        cout << count++ << " Hello World\n" << count++ << hello;
        printf("%d Hello World\n", count++);
        printf("%d%s", count++, " Hello World\n");
        cout << count++;
        puts(" Hello World");
    
        string* ptr = &hello;
        cout << count++ << *ptr;
    
        string** ptrptr = &ptr;
        cout << count++ << **ptrptr;
        cout << count++ << a ;
        
        cout << func(" Hello World\n", count);
        cout << func(hello, count);

        cout << count++;
    
        return a;
        // keeping it very sort yaha par printf aur puts laga ke bhi a print ho sakta tha
    }
    struct helloWorldhelloWorld
    {
        string hello = " Hello World\n";
        string func3(string a, int & count){
            string hello = " Hello World\n";
            cout << count++ << " Hello World\n" << count++ << hello;
            printf("%d Hello World\n", count++);
            printf("%d%s", count++, " Hello World\n");
            cout << count++;
            puts(" Hello World");
        
            string* ptr = &hello;
            cout << count++ << *ptr;
        
            string** ptrptr = &ptr;
            cout << count++ << **ptrptr;
            cout << count++ << a ;

            cout << func(" Hello World\n", count);
            cout << func(hello, count);

            struct helloWorld Hello;            

            cout << count++ << Hello.hello;
            cout << Hello.func2(hello, count);
            cout << count++ << Hello.hellohello.hello;

            cout << count++;
        
            return a;
            // keeping it very sort yaha par printf aur puts laga ke bhi a print ho sakta tha
        }
    }hellohello;
    
    string helloWorldhelloWorldhello = hellohello.hello;
};



// will go too shortly
class HelloWorld
{
private:
    /* data */
    string hello = " Hello World\n";
    string input;
    int count;
public:
    struct helloWorld
    {
        string hello = " Hello World\n";
    string func2(string a, int & count){
        string hello = " Hello World\n";
        cout << count++ << " Hello World\n" << count++ << hello;
        printf("%d Hello World\n", count++);
        printf("%d%s", count++, " Hello World\n");
        cout << count++;
        puts(" Hello World");
    
        string* ptr = &hello;
        cout << count++ << *ptr;
    
        string** ptrptr = &ptr;
        cout << count++ << **ptrptr;
        cout << count++ << a ;
        
        cout << func(" Hello World\n", count);
        cout << func(hello, count);

        cout << count++;
    
        return a;
        // keeping it very sort yaha par printf aur puts laga ke bhi a print ho sakta tha
    }
    struct helloWorldhelloWorld
    {
        string hello = " Hello World\n";
        string func3(string a, int & count){
            string hello = " Hello World\n";
            cout << count++ << " Hello World\n" << count++ << hello;
            printf("%d Hello World\n", count++);
            printf("%d%s", count++, " Hello World\n");
            cout << count++;
            puts(" Hello World");
        
            string* ptr = &hello;
            cout << count++ << *ptr;
        
            string** ptrptr = &ptr;
            cout << count++ << **ptrptr;
            cout << count++ << a ;

            cout << func(" Hello World\n", count);
            cout << func(hello, count);

            struct helloWorld Hello;            

            cout << count++ << Hello.hello;
            cout << Hello.func2(hello, count);
            cout << count++ << Hello.hellohello.hello;

            // cout << count++;
        
            return a;
            // keeping it very sort yaha par printf aur puts laga ke bhi a print ho sakta tha
        }
    }hellohello;
    
    string helloWorldhelloWorldhello = hellohello.hello;
    }Hello;
    
    HelloWorld(string a, int & count);
    string funcC(string a){
        string hello = " Hello World\n";
        cout << count++ << " Hello World\n" << count++ << hello;
        printf("%d Hello World\n", count++);
        printf("%d%s", count++, " Hello World\n");
        cout << count++;
        puts(" Hello World");
        
        string* ptr = &hello;
        cout << count++ << *ptr;
        
        string** ptrptr = &ptr;
        cout << count++ << **ptrptr;
        cout << count++ << a ;
        
        // cout << count++;
        
        return a;
    }
    string callStruct(string a){
        cout << count++ << a;
        HelloWorld mainHello(" Hello World\n", count);
        cout << count++ << mainHello.hello;
        cout << count++ << mainHello.input;
        cout << count++ << mainHello.funcC(" Hello World\n");
        cout << count++ << mainHello.Hello.hello;
        cout << count++ << mainHello.Hello.hellohello.hello;
        cout << count++ << mainHello.Hello.hellohello.func3(" Hello World\n", count);
        cout << count++ << mainHello.Hello.helloWorldhelloWorldhello;
        cout << count++ << mainHello.Hello.func2(" Hello World\n", count);
        // cout << count++ << mainHello.Hello;
        return " Hello World\n";
    }
    ~HelloWorld();
};

HelloWorld::HelloWorld(string a, int & count)
{
    input = a;
    cout << count++ << a;
    cout << count++ << hello;
    cout << count++ << " Hello World\n";
    printf("%d Hello World\n", count++);
    printf("%d%s", count++, " Hello World\n");
    cout << count++;
    puts(" Hello World");
    string* ptr = &hello;
    cout << count++ << *ptr;

    string** ptrptr = &ptr;
    cout << count++ << **ptrptr;

    cout << func(" Hello World\n", count);
    cout << func(hello, count);

    struct helloWorld Hello;
    
    
    cout << count++ << Hello.hello;
    cout << Hello.func2(" Hello World\n", count);
    cout << Hello.func2(hello, count);
    // cout << Hello.func3(hello, count);
    cout << count++ << Hello.hellohello.hello;
    cout << Hello.hellohello.func3(hello, count);
    cout << count++ << Hello.helloWorldhelloWorldhello;

}

HelloWorld::~HelloWorld()
{
    string a = hello;
    input = a;
    cout << count++ << a;
    cout << count++ << hello;
    cout << count++ << " Hello World\n";
    printf("%d Hello World\n", count++);
    printf("%d%s", count++, " Hello World\n");
    cout << count++;
    puts(" Hello World");
    string* ptr = &hello;
    cout << count++ << *ptr;

    string** ptrptr = &ptr;
    cout << count++ << **ptrptr;

    cout << func(" Hello World\n", count);
    cout << func(hello, count);

    struct helloWorld Hello;
    
    
    cout << count++ << Hello.hello;
    cout << Hello.func2(" Hello World\n", count);
    cout << Hello.func2(hello, count);
    // cout << Hello.func3(hello, count);
    cout << count++ << Hello.hellohello.hello;
    cout << Hello.hellohello.func3(hello, count);
    cout << count++ << Hello.helloWorldhelloWorldhello;

}




int main(){
    int count = 1;
    string hello = " Hello World\n";
    cout << count++ << " Hello World\n" << count++ << hello;
    printf("%d Hello World\n", count++);
    printf("%d%s", count++, " Hello World\n");
    cout << count++;
    puts(" Hello World");

    string* ptr = &hello;
    cout << count++ << *ptr;

    string** ptrptr = &ptr;
    cout << count++ << **ptrptr;

    cout << func(" Hello World\n", count);
    cout << func(hello, count);

    struct helloWorld Hello;
    
    
    cout << count++ << Hello.hello;
    cout << Hello.func2(" Hello World\n", count);
    cout << Hello.func2(hello, count);
    // cout << Hello.func3(hello, count);
    cout << count++ << Hello.hellohello.hello;
    cout << Hello.hellohello.func3(hello, count);
    cout << count++ << Hello.helloWorldhelloWorldhello;


    HelloWorld Hello2(" Hello World\n", count);

    
    cout << count++ << Hello2.callStruct(" Hello World\n");
    cout << count++ << Hello2.funcC(" Hello World\n");
    cout << count++ << Hello2.Hello.hello;
    cout << count++ << Hello2.Hello.hellohello.hello;
    cout << count++ << Hello2.Hello.hellohello.func3(" Hello World\n", count);
    cout << count++ << Hello2.Hello.helloWorldhelloWorldhello;
    cout << count++ << Hello2.Hello.func2(" Hello World\n", count);
    Hello2.~HelloWorld();

    
    
}