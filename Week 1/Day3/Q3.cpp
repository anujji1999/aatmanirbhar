// Leetcode 867. Transpose Matrix
// https://leetcode.com/problems/transpose-matrix/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> ans(A[0].size(), vector<int>(A.size(), -1));
        for(int i=0; i<A.size(); i++){
            for(int j=0; j<A[0].size(); j++){
                ans[j][i] = A[i][j];
            }
        }
        return ans;
    }
};