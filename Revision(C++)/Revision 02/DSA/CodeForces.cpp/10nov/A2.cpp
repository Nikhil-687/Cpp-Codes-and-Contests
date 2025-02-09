#include<bits/stdc++.h>
using namespace std;
bool solve(string s,int x,int y,int n)
{
    int a = 0;
    int b = 0;
     int p,q;   
    int i = 0;
    while(true)
    {
        i = 0;
        p =a;
        q = b;
        while(i<n)
        {
            
            if(s[i] == 'N')b++;
            else if(s[i] == 'E')a++;
            else if(s[i] == 'S')b--;
            else if(s[i] == 'W')a--;
            if(a==x && b==y)return true;
            i++;
        }
        if(a<0 || b<0 || a>x || b>y || (p==a && q==b))return false;
        
    }
    return false;
}
int main()
{
    int t ;
    cin>>t;
    while(t>0)
    {
        int x,y,n;
        string s;
        cin>>n>>x>>y;
        cin>>s;
        if(solve(s,x,y,n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        t--;
    }
}