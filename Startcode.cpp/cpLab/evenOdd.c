#include<stdio.h>

void main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("Number is a Even Number\n");
    }
    else{
        printf("Number is a Odd Number\n");
    }
}
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int n = nums.size();
        int *max = new int[n];
        int k = 0;
        int count = 1;
        for(int i = 0;i < n-1;i++){
            max[i] = 0;
        }
        for(int i = 0;i < n-1;i++){
            if(nums.at(i) < nums.at(i+1)){
                count++;
            }
            else{
                max[i] = count;
                k++;
                count = 1;

            }
        }
        int m = max[0];
        for(int i = 0;i < n;i++){
            if(m < max[i])
                m = max[i];
        }
        return m;
    }
};class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int i=0;
        while(i<nums.length-1){
            if(nums[i]<nums[i+1]){

            
            i++;}
            else break;
        }
        return i+1;
    
        
    }
}









class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int n = nums.size(), count = n;
        for(int i = 2;i < n;i++){
            for(int j = 0;j <= n-i; ){
                for(int k = j;k < i+j-1;k++)
                {
                    //
                    //
                    //
                    //
                    //
                    //
                    //check sub array from j to j + k;and count++;
                    if((nums.at(k) != nums.at(k+1)) && (k = i+j-2)){
                        count++;
                        j++;
                    }
                    else if(nums.at(k) == nums.at(k+1)){j++;}
                    //
                    //
                    //
                    //
                    //
                }
                j++;
            }
        }
        return count;
    }
};
