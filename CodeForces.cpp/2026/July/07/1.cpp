// K-th Best Selling ProductProblem DescriptionAmazon is preparing for its annual shopping festival and wants to identify its top-performing items. Given a stream of product sales data, your task is to find the kth best-selling product.The kth best-selling product is defined as the product that ranks exactly at position k when all products are sorted by their sales volume in descending order.  To optimize for memory and performance with large datasets, you must implement your solution using a Min-Heap approach.
// Output Format:
// Print a single line containing the name of the kth best-selling product
 
#include<iostream>
#include<string> 
#include<sstream>
#include<vector>
using namespace std;

vector<int> a;

void insert(int x){

}
// i ==parent==> (i-1)/2
// i ===child==> 2*i+1, 2*i+2
// min_heap => 

int main() {
    // assuming product sale data = {25, 30, ...};
    // input formate: 25 30 ...
    string s;
    cin >> s;
    stringstream ss(s);
    int n;
    while(ss >> n){
        insert(n);
    }
    return 0;
}