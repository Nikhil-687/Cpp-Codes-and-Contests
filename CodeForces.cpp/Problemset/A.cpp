#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    t = 1;
    vector<string> svector;
    while(t--){
        string n; 
        cin >> n;
        string s;
        int counto = 0, countz = 0;

        for(int i = 0;i < n.size();i++)
        {
            if(n[i] == '0'){
                countz++;
                counto = 0;
                if(countz == 7){
                    s = "YES\n";
                    goto X;
                }
            }
            else{
                counto++;
                countz = 0;
                if(counto == 7){
                    s = "YES\n";
                    goto X;
                }
            }
        }
        s = "NO\n";
        X:;
        svector.push_back(s);
    }
    for(int i = 0;i < svector.size();i++){
        cout << svector[i];
    }
}