// Rough Hand Code So Sorry For That, & Will Develop It In Future But For Now Let It Be;
//
#include<iostream>
using namespace std;


string direct_functionHelloWorld(){
  cout << "Hello World 5\n";
  return "Hello World 6\n";
}

string input_typeDirect_functionHelloWorld(string s)
{
  return s;
}

string FunctiontoBeUsedInClass()
{
  cout << "Hello World 14\n";
  return "Hello World 15\n";
}

struct Hellworld
{
  string s; 
  int length;
};


class HelloWorld
{
    public:
      string HelloWorlD(){
        cout << "Hello World 11" << endl;
        string x = "Hello World 12" ;
        cout << x <<endl ;
        printf("%s ", "Hello World 13");
        puts("\nHello World 14");
        return "Hello World 15\n";
      }
     
};

int main()
{

  cout << "Hello World !" << endl;
  string x = "Hello World 2" ;
  cout << x << endl;
  printf("%s ", "hello World 3");
  puts("\nHello World 4");

  cout << direct_functionHelloWorld();

  cout << input_typeDirect_functionHelloWorld("Hello World "/*x could also be used*/) << 8 << ", " << 9 << ", " << 10 << endl;

  int i = 0;
  if(i == 0){cout << "Hello World 11\n";}
  else{cout << "Hello World";}
  while (i < 1){
    cout << "Hello World 12\n";
    i++;
  }
  for(i = 0;i < 2;i++){
    cout << "Hello World "<< 13+i << endl;
  }
  char ch[15] = {'H','e','l','l','o',' ','W','o','r','l','d',' ','1','5','\n'};
  for(char i:ch){
    cout << i;
  }


  struct Hellworld h;
  cout << h.s ;
  


  HelloWorld Hello1;

  cout << Hello1.HelloWorlD();


  return 0;

}