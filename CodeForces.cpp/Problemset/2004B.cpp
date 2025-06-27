#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    if(L > r || l > R){cout << "1\n";}
    else if(l == L){
      if(r == R){
	cout << abs(r-l) << "\n";
      }
      else{
	cout << abs(min(r,R) - l) + 1 << "\n";
      }
    }
    else{
      if(r == R){
	cout << abs(r - max(l, L)) + 1 << "\n";
      }
      else{
	cout << abs(min(r, R) - max(l,L)) + 2 << "\n";
      }
    }
  }
}
