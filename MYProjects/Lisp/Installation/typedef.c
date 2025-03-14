#include <stdio.h>


typedef char* i;
char* ret(i a){
    return a;
} 

struct Nikhil{
    int name;
    float age;
};

int main(int argc, char** argv) {
  puts("Hello, world!");
  puts(ret("332e"));
  return 0;
}