#include <cstdio>
#include <string>
#include <iostream>

int main(){
    char* x;
    std::cin >> x;
    int c = 0, r = 0;
    char add = 'r';
    for(int i = 0;x[i] != '\0';i++){
        std::cout << i << " " << x[i] << "\n";
        if(x[i] == ' ')continue;
        if(x[i] == 'X' || x[i] == 'x' || x[i] == '*'){
            add = 'c';
        }
        else{
            if(add == 'r'){
                r = r * 10 +((int)x[i] - '0');
            }
            else{
                c = c * 10 + ((int)x[i] - '0');
            }
        }
    }
    printf("%s %d %d", x, r, c);

    char leftBracket;
    int element;
    int mx = 0;
    std::cin >> c;
    for(int i = 0;i < r;i++){
        int cnt = 0;
        for(int j = 0;j < c;j++){
            std::cin >> element;
            if(element == 1){
                cnt++;
            }
        }
        if(mx < cnt){
            mx = cnt;
        }
    }
    printf("%d\n",mx);
}