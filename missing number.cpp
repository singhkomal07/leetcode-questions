/*DATE:6.11.26
PROBLEM LINK:https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=array
PROBLEM STATEMENT:Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
INSIGHTS GAIN FROM THIS QUESTION:sum=n*(n+1)/2
 */
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expectedsum=n*(n+1)/2;
        int actualsum=0;
        for(int num:nums){
            actualsum+=num;
        }
        return expectedsum - actualsum;
        
    }
};