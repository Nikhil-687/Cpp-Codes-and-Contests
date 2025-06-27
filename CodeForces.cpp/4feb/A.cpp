#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    if(s.size() == 1){
        cout << "New moon";
    }
    else if(s.size() == 3){
        if(s[s.size()-1] == '0'){cout << "Full moon";}
        if(s[s.size()-1] == 'R'){
            int x = s[0]-48;
            if(x == 5 && s[1] == '0'){cout << "First quarter";}
            else if(x < 5){cout << "Waxing crescent";}
            else{
                cout << "Waxing gibbous";
            }
        }
        if(s[s.size()-1] == 'L'){
            int x = s[0]-48;
            if(x == 5 && s[1] == '0'){cout << "Third quarter";}
            else if(x < 5){cout << "Waning crescent";}
            else{
                cout << "Waning gibbous";
            }
        }
    }
    else{
        if(s[1] == 'L'){
            cout << "Waning gibbous";
        }
        if(s[1] == 'R'){cout << "Waxing gibbous";}
    }
    return 0;
}