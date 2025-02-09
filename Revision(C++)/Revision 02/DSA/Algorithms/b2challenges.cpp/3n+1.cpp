#include<bits/stdc++.h>

std::map<int, long long> M;

long long lengthofCycle(int a){
    if(M[a]){return M[a];}
    if(a == 1){M[a] = 1;return 1;}
    if(a == 2){M[a] = 2;return 2;}
    if(a == 3){M[a] = 8;return 8;}
    if(a == 4){M[a] = 3;return 3;}
    if(a == 5){M[a] = 6;return 6;}
    if(a == 6){M[a] = 9;return 9;}
    if(a == 7){M[a] = 17;return 17;}
    if(a == 8){M[a] = 4;return 4;}
    if(a == 9){M[a] = 20;return 20;}
    if(a == 10){M[a] = 7;return 7;}
    if(a%2 == 0){M[a] = lengthofCycle(a/2)+1;}
    else M[a] = lengthofCycle((3*a)+1)+1;
    return M[a];
}

long long findPos(int l,int h){
    long long max = 0;
    for(int i = l;i <= h;i++){
        long long x = lengthofCycle(i);
        if(x > max){
            max = x;
        }
    }
    return max;
}

int main(){
    int a,b;
    while(std::cin >> a >> b){
        std::cout << "\n" << a << " " << b << " ";std::cout << findPos(a,b);
    }
}