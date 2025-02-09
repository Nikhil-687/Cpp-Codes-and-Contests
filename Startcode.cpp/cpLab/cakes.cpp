#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int sum = 0;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            sum = sum + x;
            a.push_back(x);
        }
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            b.push_back(x);
        }
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            c.push_back(x);
        }
        int target = sum/3;
        // ABC, ACB, BAC, BCA, CAB, CBA
        vector <int> ans;
        ans.push_back(1);
        ans.push_back(1);
        ans.push_back(1);
        ans.push_back(1);
        ans.push_back(1);
        ans.push_back(1);
        sum = 0;
        int k = 0;
        // ABC
        for(int i = 0;i < n;i++){
            if(sum < target){
                sum = sum + a.at(i);
            }
            else if(sum >= target && k == 0){
                k = 1;
                ans[0] = 1;
                ans[1] = i+1;
                sum = 0;
            }
            else if(sum < target){
                sum = sum + b.at(i);
            }
            else if(k == 1 && sum >= target){
                k = 2;
                ans[2] = ans[1] + 1;
                ans[3] = i+1;
                sum = 0;
            }
            else if(sum < target) {
                sum = sum + c.at(i);
            }
            if(sum >= target){
                ans[4] = ans[3] + 1;
                ans[5] = i+1;
                goto X;
            }
        } 
        sum = 0;
        k = 0;
        //ACB
        for(int i = 0;i < n;i++){
            if(sum < target){
                sum = sum + a.at(i);
            }
            else if(sum >= target && k == 0){
                k = 1;
                ans[0] = 1;
                ans[1] = i+1;
                sum = 0;
            }
            else if(sum < target) {
                sum = sum + c.at(i);
            }
            else if(k == 1 && sum >= target){
                k = 2;
                ans[4] = ans[1] + 1;
                ans[5] = i+1;
                sum = 0;
            }
            else if(sum < target){
                sum = sum + b.at(i);
            }
            if(sum >= target){
                ans[2] = ans[5] + 1;
                ans[3] = i+1;
                goto X;
            }
        } 
        sum = 0;
        k = 0;
        // CAB
        for(int i = 0;i < n;i++){
            if(sum < target) {
                sum = sum + c.at(i);
            }
            else if(sum >= target && k == 0){
                k = 1;
                ans[4] = 1;
                ans[5] = i+1;
                sum = 0;
            }
            else if(sum < target){
                sum = sum + a.at(i);
            }
            else if(k == 1 && sum >= target){
                k = 2;
                ans[0] = ans[5] + 1;
                ans[1] = i+1;
                sum = 0;
            }
            else if(sum < target){
                sum = sum + b.at(i);
            }
            if(sum >= target){
                ans[2] = ans[1] + 1;
                ans[3] = i+1;
                goto X;
            }
        } 
        k = 0;
        sum = 0;
        // CBA
        for(int i = 0;i < n;i++){
            if(sum < target) {
                sum = sum + c.at(i);
            }
            else if(sum >= target && k == 0){
                k = 1;
                ans[4] = 1;
                ans[5] = i+1;
                sum = 0;
            }
            else if(sum < target){
                sum = sum + b.at(i);
            } 
            else if(k == 1 && sum >= target){
                k = 2;
                ans[2] = ans[5] + 1;
                ans[3] = i+1;
                sum = 0;
            }
            else if(sum < target){
                sum = sum + a.at(i);
            }
            if(sum >= target){
                ans[0] = ans[3] + 1;
                ans[1] = i+1;
                goto X;
            }
        } 
        sum = 0;
        k = 0;
        //BAC
        for(int i = 0;i < n;i++){
            if(sum < target){
                sum = sum + b.at(i);
            }
            else if(sum >= target && k == 0){
                k = 1;
                ans[2] = 1;
                ans[3] = i+1;
                sum = 0;
            }
            else if(sum < target){
                sum = sum + a.at(i);
            }
            else if(k == 1 && sum >= target){
                k = 2;
                ans[0] = ans[3] + 1;
                ans[1] = i+1;
                sum = 0;
            }
            else if(sum < target) {
                sum = sum + c.at(i);
            }
            if(sum >= target){
                ans[4] = ans[1] + 1;
                ans[5] = i+1;
                goto X;
            }
        } 
        k = 0;
        sum = 0;
        //BCA
        for(int i = 0;i < n;i++){
            if(sum < target){
                sum = sum + b.at(i);
            }
            else if(sum >= target && k == 0){
                k = 1;
                ans[2] = 1;
                ans[3] = i+1;
                sum = 0;
            }
            else if(sum < target) {
                sum = sum + c.at(i);
            }
            else if(k == 1 && sum >= target){
                k = 2;
                ans[4] = ans[3] + 1;
                ans[5] = i+1;
                sum = 0;
            }
            else if(sum < target){
                sum = sum + a.at(i);
            }
            if(sum >= target){
                ans[0] = ans[5] + 1;
                ans[1] = i+1;
                goto X;
            }
        } 
        goto Y;
        X:;
        for(int i = 0;i < ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        if(0){
            Y:;
            cout << -1 << endl;
        }
    }
}