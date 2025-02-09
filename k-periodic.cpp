#include<bits/stdc++.h>
#include<string>
using namespace std;

class solution 
{

   public:
      int operationcount(string word,int k)
      {


         int n = 0;
         int k = 0;
         int cont  = 1;
         int contcount = 0;
         for(int i = 0;i < n-k;i++){
            for(int j= 0;j < k;j++)
            {

               if(word[i*k + j] != word[i*k + k + j])
               {
                  k = 1;
               }
               else cont = 0;

            }
            if(cont != 0){contcount++;}
         }
         if(k == 0)return 0;
         else {

         }

      }

};