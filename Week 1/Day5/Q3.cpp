// Leetcode 278. First Bad Version
// https://leetcode.com/problems/first-bad-version/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstBadVersion(unsigned int n) {

        unsigned int ans = n;

        unsigned int start = 1;
        unsigned int end = n;
        unsigned int mid;
        while(start <= end){
            mid = start + (end - start)/2;
            if(isBadVersion(mid) == true){
                ans = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        return ans;
    }
};