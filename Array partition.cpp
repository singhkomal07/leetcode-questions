/*DATE:25.10.26
PROBLEM LINK:https://leetcode.com/problems/array-partition-i/
PROBLEM STATEMENT:Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized and return the maximized sum.
INSIGHTS GAIN FROM THIS QUESTION: To maximize the sum of minimums, we should pair adjacent elements after sorting the array.
Time complexity: O(n log n)
Auxiliary space: O(1)
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i+=2){
            sum=sum+nums[i];
        }
        return sum; 
    }
};