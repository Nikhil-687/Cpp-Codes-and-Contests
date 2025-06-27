#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        long long totalWays;

        // Smart division to prevent overflow
        if (i % 2 == 1)  
            totalWays = (i * (i - 1) / 2) * (i * (i + 1));  
        else  
            totalWays = ((i / 2) * (i - 1)) * (i * (i + 1));  

        long long attackingWays = 4 * (i - 1) * (i - 2);  

        cout << (totalWays - attackingWays) << "\n";
    }
}
