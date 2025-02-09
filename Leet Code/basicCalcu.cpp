#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        int n = s.size();
        int result = 0;
        int k = 1;
        for(int i = 0;i < n;i++){
            if(s[i] == ' ' || s[i] == '(' || s[i] == ')'){}
            else{
                if(s[i] == '+'){
                    int j = i+1;
                    k = 1;
                    while(s[j] < 48 || s[j] > 57){
                        if(s[j] == '-')k*= -1;
                        j++;
                    }
                    int num = 0;
                    while(s[j] >= 48 && s[j] <= 57){
                        num = num*10 - 48 + s[j];
                        j++;
                    }
                    result += k*num;
                    i = j+1;
                }
                if(s[i] == '-'){
                    int j = i+1;
                    k = -1;
                    while(s[j] < 48 || s[j] > 57){
                        if(s[j] == '-')k *= -1;
                        j++;
                    }
                    int num = 0;
                    while(s[j] >= 48 && s[j] <= 57){
                        num = num*10 -48 + s[j];
                        j++;
                    }
                    result += k*num;
                    i = j;
                    if(s[j] == '-')i = j-1;
                }
                else if(s[i] > 48 && s[i] <= 57){
                    int num = 0;
                    int j = i;
                    while(s[j] >= 48 && s[j] <= 57){
                        num = num*10 - 48 + s[j];
                        j++;
                    }
                    result += num;i = j-1;
                }
            }
        }
        return result;
    }
};



// backet start pe while loop intill bracket cloces


















