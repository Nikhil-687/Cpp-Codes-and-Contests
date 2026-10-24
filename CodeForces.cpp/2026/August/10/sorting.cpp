#include<bits/stdc++.h>
using namespace std;    

int main(){
    vector<int> a = {3,5, 6, 1,2};
    sort(a.begin(), a.end(), [](const int& x, const int& y){
        if(x <= y){
            cout << "true " << x << " " << y << endl;
        }
        else{
            cout << "false " << x << " " << y << endl;
        }
        return x <= y;
    });

    cout << "Sorted array: ";
    for(const auto& i : a){
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}