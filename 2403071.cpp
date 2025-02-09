#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int w[n];
	    int ans = 0;
	    for(int i = 0;i < n;i++){
	        cin >> w[i];
	    }
	    for(int m = 0;m < n;m++){
	        for(int i = 0;i < n - m -1;i++){
	            if(w[i] > w[i+1]){
	                int t2 = w[i];
	                w[i] = w[i+1];
	                w[i+1] = t2;
	            }
	        }
	        if(ans > w[n-m]*(m+1)){
	            ans = w[n-m]*(m+1);
	        }
	    }
	    cout << ans << endl;
	    
	}

}
