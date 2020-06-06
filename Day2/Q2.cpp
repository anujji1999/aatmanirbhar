// Leetcode 1351. Count Negative Numbers in a Sorted Matrix
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(vector<int> v : grid){
            for(int i = v.size()-1; i >= 0; i--){
                if(v[i] < 0){
                    count++;
                }else{
                    break;
                }
            }
        }
        return count;
    }
};