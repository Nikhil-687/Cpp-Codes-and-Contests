#include<bits/stdc++.h>
using namespace std;

int search(vector<int> a, int target){
    int low = 0;
    int high = a.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(a[mid] == target){
            return mid;
        }
        else if(a[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    for(int i = 0; i < t; i++){
        int n;
        vector<int> a;
        cin >> n;
        int target = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(i == 0){
                target = x;
            }
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        if(target < 0){
            int ind = search(a, target);
            if(ind == n/2){
                ans.push_back(1);
            }
            else if(ind < n/2){
                int count = 0;
                for(int i:a){
                    if(abs(i) >= abs(target)){
                        count++;
                    }
                }
                if(count >= (n/2) + ((n%2) ? 1 : 0)){
                    ans.push_back(1);
                }
                else{
                    ans.push_back(0);
                }
                
            }
            else{
                ans.push_back(1);
            }
        }
        else{
            int ind = search(a, target);
            if(ind == n/2){
                ans.push_back(1);
            }
            else if(ind < n/2){
                ans.push_back(1);
            }
            else{
                int count = 0;
                for(int i:a){
                    if(abs(i) >= abs(target)){
                        count++;
                    }
                }
                if(count >= (n/2) + ((n%2) ? 1 : 0)){
                    ans.push_back(1);
                }
                else{
                    ans.push_back(0);
                }
            }
        }

    }
    for(int i = 0; i < t; i++){
        if(ans[i] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}