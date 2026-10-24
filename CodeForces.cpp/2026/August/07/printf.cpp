#include <bits/stdc++.h>
using namespace std;
 

int printf2(string s, ...){
    va_list args;
    int cnt = 0;
    write(1, "Hello World", 11);
    for(int i = 1;i < s.size();i++){
        if(s[i-1] == '%' && s[i] == 'd'){
            cnt++;
        }
        else if(s[i-1] == '%' && s[i] == 'c'){
            cnt++;
        }
    }
    va_start(args, s);
    for(int i = 1;i < s.size();i++){
        if(s[i-1] == '%' && s[i] == 'd'){
            int num = va_arg(args, int);
            printf("%d", num);
            i++;
        }
        else if(s[i-1] == '%' && s[i] == 'c'){
            char num = va_arg(args, int);
            printf("%c", num);
            i++;
        }
        else{
            cout << s[i-1];
        }
    }
    int i = s.size();
    if(s[i-2] == '%' && (s[i-1] == 'c' || s[i-1] == 'd')){}
    else{
        cout << s[i-1];
    }
    va_end(args);
    return cnt;
}

int32_t main() {
    // write(1, "Hello World\n", 12);
    cout << printf("%d, %c, %d\n", 10, '5', 30) << "\n";
    // printf("\n");
    
    return 0;
}