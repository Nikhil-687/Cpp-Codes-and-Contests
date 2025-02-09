#include<bits/stdc++.h>
using namespace std;      
      
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int romantoint(string s){
   int sum = 0;
   for(int i = 1;i < s.size();i++){
   
      
      int sd = 1;
      char s2 = s[i];
      
      int si1 = 1;
      switch(s2){
          case 'M':
              sd = M;
              break;
          case 'D':
              sd = D;
              break;
          case 'C':
              sd = C;
              break;
          case 'L':
              sd = L;
              break;
          case 'X':
              sd = X;
              break;
          case 'V':
              sd = V;
              break;
          case 'I':
              sd = I;
              break;
          
      }
      if(s.size() == 1){return sd;}
      else{
         char si12 = s[i-1];
         switch(si12){
             case 'M':
                 si1 = M;
                 break;
             case 'D':
                 si1 = D;
                 break;
             case 'C':
                 si1 = C;
                 break;
             case 'L':
                 si1 = L;
                 break;
             case 'X':
                 si1 = X;
                 break;
             case 'V':
                 si1 = V;
                 break;
             case 'I':
                 si1 = I;
                 break;
         }
         char si2 = s[i+1];
         int sd2;
         switch(si2){
             case 'M':
                 sd2 = M;
                 break;
             case 'D':
                 sd2 = D;
                 break;
             case 'C':
                 sd2 = C;
                 break;
             case 'L':
                 sd2 = L;
                 break;
             case 'X':
                 sd2 = X;
                 break;
             case 'V':
                 sd2 = V;
                 break;
             case 'I':
                 sd2 = I;
                 break;
         }
         if(i == s.size() - 1)
         {

            if(si1 >= sd){
               sum = sum + si1 + sd;
               return sum;
            }
            else {
               sum = sum + sd - si1;
            }

         }
         else if(s[i] == s[i-1]){
             if(s[i+1] == s[i]){sum = sum + 3 * sd;i++;}
             else sum = sd * 2;
         }
         else if(s[i-1] != 'M' && s[i] == 'M'){
            sum = sum + sd -si1;
            
            if(i == s.size()-2){
               sum = sum + sd2;
               return sum;
            }
            i++;
         }
         else if(s[i-1] != 'D' && s[i-1] != 'M' && s[i] == 'D'){
            sum = sum + sd -si1;
            
            if(i == s.size()-2){
               sum = sum + sd2;
               return sum;
            }
            i++;
         }
         else if(s[i-1] != 'C' && s[i-1] != 'D' && s[i-1] != 'M' && s[i] == 'C'){
            sum = sum + sd -si1;
            
            if(i == s.size()-2){
               sum = sum + sd2;
               return sum;
            }
            i++;
         }
         else if(s[i-1] != 'L' && s[i-1] != 'C' && s[i-1] != 'D' && s[i-1] != 'M' && s[i] == 'L'){
            sum = sum + sd -si1;
            
            if(i == s.size()-2){
               sum = sum + sd2;
               return sum;
            }
            i++;
         }
         else if(s[i-1] != 'X' && s[i-1] != 'L' && s[i-1] != 'C' && s[i-1] != 'D' && s[i-1] != 'M' && s[i] == 'X'){
            sum = sum + sd -si1;
            
            if(i == s.size()-2){
               sum = sum + sd2;
               return sum;
            }
            i++;
         }
         else if(s[i-1] == 'I' && s[i] == 'V'){
            sum = sum + sd -si1;
            
            if(i == s.size()-2){
               sum = sum + sd2;
               return sum;
            }
            i++;
         }
         else{
             if(si1 > sd)sum = sum + si1;
         }
      }
      
   }
   return sum;
}



int main()
{


   string str;
   cin >> str;
   cout << romantoint(str) << endl;

}