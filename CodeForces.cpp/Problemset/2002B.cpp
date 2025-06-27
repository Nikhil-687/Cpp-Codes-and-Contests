#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >>t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0;i < n;i++){
      cin >> a[i];
    }
    for(int i = 0;i < n;i++){
      cin >> b[i];
    }
    int i = 1;
    
    if(i == 1 && a[i-1] == b[i-1])
      {
        for(int i = 1;i < n;i++){
	  if(a[i] != b[i]){cout << "Alice\n";goto X;}
        }
      }
    else{
      for(int i = 0;i < n;i++){
	if(a[i] != b[n-1-i]){cout << "Alice\n";goto X;}
      }
    }
    
    cout << "Bob\n";
  X:;
  }
}

