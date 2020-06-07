// Leetcode 1394. Find Lucky Integer in an Array
// https://leetcode.com/problems/find-lucky-integer-in-an-array/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> umap;
        for(int ele : arr){
            umap[ele]++;
        }
        int ans = -1;
        for(int ele : arr){
            if(umap[ele] == ele){
                ans = max(ans, ele);
            }
        }

        return ans;
    }
};