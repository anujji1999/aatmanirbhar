// LeetCode 1365. How Many Numbers Are Smaller Than the Current Number
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sortedArray;
        vector<int> ans;

        for(int ele : nums){
            sortedArray.push_back(ele);
        }

        sort(sortedArray.begin(), sortedArray.end());

        unordered_map<int, int> umap;
        for(int i=0; i<sortedArray.size(); i++){
            int ele = sortedArray[i];
            if(umap.find(ele) == umap.end()){
                umap[ele] = i;
            }
        }

        for(int ele : nums){
            ans.push_back(umap[ele]);
        }

        return ans;
    }
};