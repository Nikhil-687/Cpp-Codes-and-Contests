// Fibonacci of Nth number 
// Given input integer N return the Nth term 
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prev = 0, curr = 1;
    if(n <= 2){
        cout << n-1 << "\n"; // first two terms are considered known to 0, 1 respectively.
    }
    else{
        int counter = 3; // starting from 3rd term because we know first two terms {0,1}
        int ans;
        // we are implementing bottom up DP, storing all the values only once insteed of recurssively calling its decendents
        while(n >= counter){
            ans = prev + curr; // ans represent new upcoming value
            prev = curr; // updating previous value
            curr = ans; // updating current value
            counter++; // increasing counter
        }
        cout << ans << "\n";
    }

    // overall time complexity used is O(n), and max extra memory usage is 16 bytes(4 integers) ie. O(1); 
    return 0;
}