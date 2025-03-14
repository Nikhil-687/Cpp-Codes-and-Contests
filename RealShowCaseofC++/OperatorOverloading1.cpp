#include<bits/stdc++.h>
using namespace std;

class Overload
{

    public:
        int operator[](int s)
        {

            int i = 0;
            char ch1, ch2, ch3, ch4;
            // cout << "print Ascii code charecters from 0 to 127 : \n";
            int n = 32;
            // while(i < n){
            //     ch1 = i;ch2 = ch1 + 32;ch3 = ch2 + 32;ch4 = ch3 + 32;
            //     //if(i == 10 || i == 13)cout << i << "]  " << "       " << i+32 <<"]"<< ch2 << "    "  << "    " << i+64  << "]" << ch3 << "         " << i+96 << "]" << ch4 << "\n";
            //     if(i < 10)cout << "  ";
            //     else if(i < 100)cout << " ";
            //     cout << i << "][]         " << "    " << "    " << i+32 << "][" << ch2 << "]    "  << "    " << i+64  << "][" << ch3 << "]         " << i+96 << "][" << ch4 << "]" << endl;
            //     i++;
            // }

        
            if(s < 2)return s;
            Overload O1;
            return O1[s-1] + O1[s-2];
        }

};

int main()
{


    cout << 15 << endl;
    int t = 43;
    int x = []{cout << 5 << endl;return 7;}();
    [](int n = 52){cout << n << endl;}();
    cout << x << endl;

    char ch = 5;
    cout << ch << endl;
    Overload fib;
    int x2 = fib[30]; 
    cout << "fobincii series nth element : " << x2 << endl;

}