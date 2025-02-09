#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b*c || b == a*c || c == b*a)cout << "Yes";
    else cout << "No";
}