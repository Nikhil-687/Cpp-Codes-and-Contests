#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int c, a, b;
        cin>>c>>a>>b;
        string s;
        cin>>s;
        vector<int> queen(2);
        queen[0] = a;
        queen[1] = b;
        vector<int> alice(2, 0);
        vector<int> alia(2, 0);
        int i = 0;
        bool isit = false;
        int count = 0;
        while(true)
        {
            if(i == s.length())
            {
                i = 0;
            }

            if(s[i] == 'N')
            {
                alia[1]++;
            }
            else if(s[i] == 'E')
            {
                alia[0]++;
            }
            else if(s[i] == 'W')
            {
                alia[0]--;
            }
            else 
            {
                alia[1]--;
            }
            
            if(alia == alice)
                break;
            if(alia == queen)
            {    
                isit = true;
                break;
            }
            i++;
            count++;
            if(count == 2000)
                break;
        }
        if(isit)
            cout<<"Yes"<<endl;
        else    
            cout<<"No"<<endl;
    }    
}