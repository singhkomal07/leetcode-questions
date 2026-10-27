/*DATE:27.10.26
PROBLEM LINK:https://leetcode.com/problems/split-the-array/
PROBLEM STATEMENT:You are given an integer array nums of even length. Split the array into two parts nums1 and nums2 such that:
- nums1.length == nums2.length == nums.length / 2.
- nums1 contains distinct elements.
- nums2 contains distinct elements.
Return true if it is possible to split the array, and false otherwise.
INSIGHTS GAIN FROM THIS QUESTION: Use a hash map to count the frequency of each element. If any element appears more than twice, it's impossible to split the array.
Time complexity: O(n)
Auxiliary space: O(n)
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>count;
        for(int num:nums){
        count[num]++;
        if(count[num]>2){
            return false;
        }
        
    }
    return true;
}
};