/*DATE:24.10.26
PROBLEM LINK:https://leetcode.com/problems/maximum-subarray/
PROBLEM STATEMENT:Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
INSIGHTS GAIN FROM THIS QUESTION: Use Kadane's algorithm to solve the maximum subarray problem in linear time.
Time complexity: O(n)
Auxiliary space: O(1)
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum=nums[0];
        int maxsum=nums[0];
        for(int i=1;i<nums.size();i++){
            currentsum=max(nums[i],currentsum+nums[i]);
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
    }
};