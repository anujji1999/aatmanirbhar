// Leetcode 35. Search Insert Position
// https://leetcode.com/problems/search-insert-position/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(target < nums[0]){
            return 0;
        }else if(target > nums.back()){
            return nums.size();
        }
        
        int left = 0, right = nums.size()-1;

        while(left < right){
            int middle = left + (right-left)/2;
            if(nums[middle] == target){
                return middle;
            }else if(nums[middle] > target){
                right = middle - 1;
            }else{
                left = middle + 1; 
            }
        }

        if(nums[left] < target){
            return left+1;
        }else{
            return left;
        }
    }
};