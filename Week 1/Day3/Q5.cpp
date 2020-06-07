// Leetcode 766. Toeplitz Matrix
// https://leetcode.com/problems/toeplitz-matrix/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = matrix.size()-1; i>=0; i--){
            int row = i, col = 0;
            int ele = matrix[row][col];
            while(row < matrix.size() && col < matrix[0].size()){
                if(matrix[row][col] != ele){
                    return false;
                }
                row++;
                col++;
            }
        }

        for(int j = 0; j < matrix[0].size(); j++){
            int row = 0, col = j;
            int ele = matrix[row][col];
            while(row < matrix.size() && col < matrix[0].size()){
                if(matrix[row][col] != ele){
                    return false;
                }
                row++;
                col++;
            }
        }

        return true;
    }
};