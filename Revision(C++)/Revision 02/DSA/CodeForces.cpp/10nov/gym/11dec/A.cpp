#include <bits/stdc++.h>
using namespace std;


int main()
{

    int  H, P, C, K, N;
    cin >> H >> P >> C >> K >> N;
    // H = hight
    // P = no.of bricks in one layer
    // C = no. of colors
    // K = no.of layers in one block
    // N = no.of bricks already present




    vector<int> require(C+1, 0);
    int i = 1;
    while(i <= H){
        if(i%K) require[(((i/K)+1)%C)?(((i/K)+1)%C):C] += P;
        else require[((i/K)%C)?((i/K)%C):C] += P;  
        i++;
    }
    while(N--){
        int i = N/P;
        if(i%K) require[(((i/K)+1)%C)?(((i/K)+1)%C):C]--;
        else require[((i/K)%C)?((i/K)%C):C]--;  
    }

    for(int i = 0;i < require.size();i++){
        cout << require[i] << " ";
    }


}