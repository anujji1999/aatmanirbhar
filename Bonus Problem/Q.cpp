// Leetcode 832. Flipping an Image
// https://leetcode.com/problems/flipping-an-image/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int row = 0; row < A.size(); row++){
            for(int j=0,k=A[row].size()-1; j<k; j++, k--){
                int temp = A[row][j];
                A[row][j] = A[row][k];
                A[row][k] = temp;
            }
        }

        for(int i=0; i<A.size(); i++){
            for(int j=0; j<A[0].size(); j++){
                A[i][j]++;
                A[i][j] %= 2;
            }
        }

        return A;
    }
};