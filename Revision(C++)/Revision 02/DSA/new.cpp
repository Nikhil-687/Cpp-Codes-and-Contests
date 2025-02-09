// #include <bits/stdc++.h>
// using namespace std;

// void swap(int& a,int &b){
//     int t = a;
//     a = b;
//     b = t;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while(t--){
// 	    int n;
// 	    cin >> n;
// 	    vector<int> a;
// 	    int isOdd = 0;
// 	    int count = 0;
// 	    int j = n-1;
// 	    int index;
// 	    int sum = 0;
// 	    if(n == 2 || n == 1){goto Z;}
//     	for(int i = 0;i < n;i++){
//     	    int x;
//     	    cin >> x;
// 	        a.push_back(x);
// 	    }
// 	    for(int i = 0;i < n;i++){
// 	        if(i == 0){}
// 	        else if(a[i]%2 != 0){index = i;isOdd = 1;goto X;}
// 	    }
// 	    goto Z;
// 	    X:;
// 	    if(isOdd){
// 	        swap(a[index], a[0]);
// 	    }
// 	    for(int i = 1;i < n-1;i++){
// 	        while(a[j]%2 != 0 && j >= i){j--;}
// 	        int size = 0;
// 	        if(a[i]%2 != 0 && a[i-1]%2 == 0 && a[i+1]%2 == 0){
// 	            swap(a[i], a[j]);
// 	       }
// 	       else if(a[i-1]%2 != 0 && a[i]%2 != 0 && a[i+1]%2 != 0){
// 	           for(int k = i-1;k < n-1;k++){
// 	               if(k == j){
// 	                   goto Z;
// 	               }
// 	               if(a[k]%2 != 0){size++;}
// 	               if(size%2 == 0){}
// 	               else{
// 	                   swap(a[k], a[j]);
// 	                   i = k;
// 	               }
// 	           }
// 	        }
// 	    }
// 	    Z:;
// 	    count = 0;
// 	    for(int i = 0;i < n;i++){
// 	        sum += a[i];
// 	        if(sum%2 != 0)count++;
// 	    }
// 	    cout << count << "\n";
// 	}

// }
#include<bits/stdc++.h>
using namespace std;
vector<int> H;

int breackPoint = 0;

    bool isValid(string s) {
        if(s.size() == 0)return 1;
        if(s.size() == 1)return 0;
        int max = 0,count = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '('){H.push_back(0);}
            else if(s[i] == '['){H.push_back(1);}
            else if(s[i] == '{'){H.push_back(2);}
            else if(H.size()>=1){
                if(s[i] == ')' && H[H.size()-1] == 0){H.pop_back();}
                else if(s[i] == ']' && H[H.size()-1] == 1){H.pop_back();}
                else if(s[i] == '}' && H[H.size()-1] == 2){H.pop_back();}
                else{breackPoint = i;}
            }
            if(H.size() == 0){
                count = i - breackPoint;
                if(max < count)max = count;
            }
        }
        if(H.size() == 0){return 1;}
		cout << H.size();
        return 0;
    }

int main(){
	cout << isValid("([])}") << endl;
}