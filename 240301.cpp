//writting helloworld systematicly
#include<iostream>
using namespace std;

string helloworld(string s6);

struct HelloWorld
{

   int i;
   string s3;
   string s4 = "Hello World ";
   string s7 = helloworld("Hello World ");

};



string helloworld(string s6)
{





   cout << "Hello World " << 90 << endl;


   return s6;


}


string HelloWorlD(string s5)
{





   //cout,printf,puts,variablevalueprint,arraystoring and calling,pointer,refrensing a variable,
   //derefrensing pointer,struct,lambdas 


   //cout, printf, puts
   cout << "Hello World 45\n";
   printf("%s\n","Hello World 46");
   puts("Hello World 47");


   //storing value in string and calling variable
   string s = "Hello World";
   cout << s << " " << 48 << endl;
   

   //making array of char and calling it
   char ch[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
      //for,forrange,while,dowhile
         //cout ,printf ,puts 
   int i = 0;
   do{
      cout << ch[i];
      i++;
   }while(i < 12);
   cout << " 49, 50, 51\n";
   while(i < 24){
      cout << ch[i-12];
      i++;
   }
   cout << " 52, 53, 54\n";
   for(int i = 0;i < 12;i++){
      cout << ch[i];
   }
   cout << " 55, 56, 57\n";
   for(char i : ch){
      cout << i;
   }
   cout << " 58, 59, 60\n";


   //using pointer to array
   char *p = ch;
   i = 0;
   do{
      cout << p[i];
      i++;
   }while(i < 12);
   cout << " 61, 62, 63\n";
   while(i < 24){
      cout << p[i-12];
      i++;
   }
   cout << " 64, 65, 66\n";
   for(int i = 0;i < 12;i++){
      cout << p[i];
   }
   cout << " 67, 68, 69\n";

   //using pointer refrencing to variable and derefrencing
   string *p2 = &s;
   cout << *p2 << " " << 70 << endl;

   //using refrencing to variable and derefrencing
   string &s2 = s;
   cout << s2 << " " << 71 << endl;

   //pointer to heap
   char *p3 = new char[16];
   p3 = "Hello World 72\n";

   cout << p3;

   i = 0;
   do{
      cout << p3[i];
      i++;
   }while(i < 12);
   cout << "73, 74, 75\n";
   while(i < 24){
      cout << p3[i-12];
      i++;
   }
   cout << "76, 77, 78\n";
   for(int i = 0;i < 12;i++){
      cout << p3[i];
   }
   cout << "79, 80, 81\n";

   //struct HelloWorld 
   struct HelloWorld Hello = {2,"Hello World "}; 
   cout << Hello.s3 << 82 << endl << Hello.s4 << 83 << endl;

   //lambda non return
   []{
      cout << "Hello World 84\n";
      printf("%s\n","Hello World 85");
      puts("Hello World 86");
   }();

   //return from lambda
   auto HelloLambda = []{return "Hello World 87\n";}();
   string HelloLambda2 = []{return "Hello World 88\n";}();

   cout << HelloLambda << HelloLambda2;

   cout << s5;


   //Calling other function
   cout << helloworld("Hello World ") << 91 << endl;
   cout << Hello.s7 << 92 << endl;

   return "Hello World 93\n";


}



class ToInherit
{
private:
   /* data */
public:
   
   string class_methoD(string s8)
   {

      cout << "\n\n Inherited class contants \n\n";

      cout << "Hello world 147\n";

      cout << "Hello World !\n";
      printf("%s\n","Hello World 2");
      puts("Hello World 3");


      //storing value in string and calling variable
      string s = "Hello World";
      cout << s << " " << 4 << endl;


      //making array of char and calling it
      char ch[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
         //for,forrange,while,dowhile
            //cout ,printf ,puts 
      int i = 0;
      do{
         cout << ch[i];
         i++;
      }while(i < 12);
      cout << " 5, 6, 7\n";
      while(i < 24){
         cout << ch[i-12];
         i++;
      }
      cout << " 8, 9, 10\n";
      for(int i = 0;i < 12;i++){
         cout << ch[i];
      }
      cout << " 11, 12, 13\n";
      for(char i : ch){
         cout << i;
      }
      cout << " 14, 15, 16\n";


      //using pointer to array
      char *p = ch;
      i = 0;
      do{
         cout << p[i];
         i++;
      }while(i < 12);
      cout << " 17, 18, 19\n";
      while(i < 24){
         cout << p[i-12];
         i++;
      }
      cout << " 20, 21, 22\n";
      for(int i = 0;i < 12;i++){
         cout << p[i];
      }
      cout << " 23, 24, 25\n";

      //using pointer refrencing to variable and derefrencing
      string *p2 = &s;
      cout << *p2 << " " << 26 << endl;

      //using refrencing to variable and derefrencing
      string &s2 = s;
      cout << s2 << " " << 27 << endl;

      //pointer to heap
      char *p3 = new char[16];
      p3 = "Hello World 28\n";

      cout << p3;

      i = 0;
      do{
         cout << p3[i];
         i++;
      }while(i < 12);
      cout << "29, 30, 31\n";
      while(i < 24){
         cout << p3[i-12];
         i++;
      }
      cout << "32, 33, 34\n";
      for(int i = 0;i < 12;i++){
         cout << p3[i];
      }
      cout << "35, 36, 37\n";

      //struct HelloWorld 
      struct HelloWorld Hello = {2,"Hello World "}; 
      cout << Hello.s3 << 38 << endl << Hello.s4 << 39 << endl;

     
      //return from lambda
      auto HelloLambda = []{return "Hello World 43\n";}();
      string HelloLambda2 = []{return "Hello World 44\n";}();

      cout << HelloLambda << HelloLambda2;


      //function calling
      cout << HelloWorlD("Hello World 89\n");

      //function in struct
      cout << Hello.s7 << 94 << endl;

      cout << s8 << endl;
      return "Hello World\n";

   };

   string functionCallingInClasstoBeInherited(string s9){
      cout << s9;
      cout <<  HelloWorlD("Hello World \n");
      return "Hello World Exit\n";
   }


};



class HELLOWORLD:ToInherit
{

public:

   string class_methoD(string s12){
      cout << "Method of class toinherit is Inherited in Hallo world\n";
      return ToInherit::class_methoD(s12);
   }
   string class_method()
   {
      cout << "\nClass Concept Started\n\n";
      cout << "Hello World 95\n";
      return "Hello World 96\n";

   }
   string function_call(){
      cout << HelloWorlD("Hello World 89\n");
      return "Hello World 146\n";
   }
   string inherited(string s10){
      cout << s10 << 147 << endl;
      cout << class_methoD("Hello World\n");
      cout << functionCallingInClasstoBeInherited("Hello World");
      return "Hello World Finally Ends Here.\n\n\n";

   }

};

int main ( )
{

   //cout,printf,puts,variablevalueprint,arraystoring and calling,pointer,refrensing a variable,
   //derefrensing pointer,struct,lambdas 


   //cout, printf, puts
   cout << "Hello World !\n";
   printf("%s\n","Hello World 2");
   puts("Hello World 3");


   //storing value in string and calling variable
   string s = "Hello World";
   cout << s << " " << 4 << endl;
   

   //making array of char and calling it
   char ch[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
      //for,forrange,while,dowhile
         //cout ,printf ,puts 
   int i = 0;
   do{
      cout << ch[i];
      i++;
   }while(i < 12);
   cout << " 5, 6, 7\n";
   while(i < 24){
      cout << ch[i-12];
      i++;
   }
   cout << " 8, 9, 10\n";
   for(int i = 0;i < 12;i++){
      cout << ch[i];
   }
   cout << " 11, 12, 13\n";
   for(char i : ch){
      cout << i;
   }
   cout << " 14, 15, 16\n";


   //using pointer to array
   char *p = ch;
   i = 0;
   do{
      cout << p[i];
      i++;
   }while(i < 12);
   cout << " 17, 18, 19\n";
   while(i < 24){
      cout << p[i-12];
      i++;
   }
   cout << " 20, 21, 22\n";
   for(int i = 0;i < 12;i++){
      cout << p[i];
   }
   cout << " 23, 24, 25\n";

   //using pointer refrencing to variable and derefrencing
   string *p2 = &s;
   cout << *p2 << " " << 26 << endl;

   //using refrencing to variable and derefrencing
   string &s2 = s;
   cout << s2 << " " << 27 << endl;

   //pointer to heap
   char *p3 = new char[16];
   p3 = "Hello World 28\n";

   cout << p3;

   i = 0;
   do{
      cout << p3[i];
      i++;
   }while(i < 12);
   cout << "29, 30, 31\n";
   while(i < 24){
      cout << p3[i-12];
      i++;
   }
   cout << "32, 33, 34\n";
   for(int i = 0;i < 12;i++){
      cout << p3[i];
   }
   cout << "35, 36, 37\n";

   //struct HelloWorld 
   struct HelloWorld Hello = {2,"Hello World "}; 
   cout << Hello.s3 << 38 << endl << Hello.s4 << 39 << endl;

   //lambda non return
   []{
      cout << "Hello World 40\n";
      printf("%s\n","Hello World 41");
      puts("Hello World 42");
   }();

   //return from lambda
   auto HelloLambda = []{return "Hello World 43\n";}();
   string HelloLambda2 = []{return "Hello World 44\n";}();

   cout << HelloLambda << HelloLambda2;


   //function calling
   cout << HelloWorlD("Hello World 89\n");

   //function in struct
   cout << Hello.s7 << 94 << endl;


   //making object(Named: HellO) for class HELLOWORlD
   HELLOWORLD HellO;
   cout << HellO.class_method();
   cout << HellO.function_call();
   cout << HellO.inherited("Hello World ");
   cout << HellO.class_methoD("hello May not end yet\n");


}
