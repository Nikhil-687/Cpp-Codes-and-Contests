#include<bits/stdc++.h>

int main(){
    int n, m;
    while(std::cin >> n >> m){
        std::vector<std::vector<char>> a;
        for(int i = 0;i < n;i++){
            std::vector<char> b;
            for(int j = 0;j < m;j++){
                char x;
                std::cin >> x;
                b.push_back(x);
            }
            a.push_back(b);
        }
        int count = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(a[i][j] == '*'){   count++;             }
                
            }
        }
        while(count--){
            for(int i = 0;i < n;i++){
                for(int j = 0;j < m;j++){
                    if(a[i][j] == '*'){                }
                    if(a[i][j] == '.'){
                        if(i > 0 && j > 0 && i < n-1 && j < m-1){
                            if((a[i-1][j] == '*' || a[i-1][j-1] == '*' || a[i][j-1] == '*' || a[i+1][j] == '*' || a[i][j-1] == '*' || a[i+1][j+1] == '*' || a[i][j+1] == '*' || a[i-1][j+1] == '*' || a[i+1][j-1] == '*')){a[i][j] = '1';}
                            else a[i][j]++;
                        }
                        else{
                            
                        }
                    }
                }
            }
        }
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                std::cout << a[i][j] << " "; 
            }
            std::cout << "\n";
        }
    }
}