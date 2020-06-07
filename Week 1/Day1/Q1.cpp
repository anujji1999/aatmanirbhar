// Leetcode 167. Two Sum II - Input array is sorted
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int firstIdx = 0, secondIdx = numbers.size()-1;
        while(firstIdx < secondIdx){
            if(numbers[firstIdx] + numbers[secondIdx] == target){
                ans.push_back(firstIdx + 1);
                ans.push_back(secondIdx + 1);
                return ans;
            }else if(numbers[firstIdx] + numbers[secondIdx] > target){
                secondIdx--;
            }else{
                firstIdx++;
            }
        }
        return ans;
    }
};