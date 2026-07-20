#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int themax = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]!=0){
                count++;
                themax=max(themax,count);
            }
            else {
                count = 0;
            }
           
        }
        
         return themax;
    }
};