// Leetcode 349. Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> umap1;
        unordered_map<int, int> umap2;
        vector<int> ans;

        for(int ele : nums1){
            umap1[ele]++;
        }

        for(int ele : nums2){
            umap2[ele]++;
        }

        unordered_map<int, int> :: iterator it = umap1.begin();
        while(it != umap1.end()){
            int ele = it->first;
            if(umap2.find(ele) != umap2.end()){
                ans.push_back(ele);
            }
            it++;
        }
        return ans;
    }
};