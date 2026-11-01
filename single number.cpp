
/*DATE:01.11.26
PROBLEM LINK:https://leetcode.com/problems/single-number/
PROBLEM STATEMENT:Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
INSIGHTS GAIN FROM THIS QUESTION: Use the XOR operation to cancel out duplicate elements.
Time complexity: O(n) where n is the number of elements in the array.
XOR properties:
1. a ^ a = 0 (XOR of a number with itself is 0)
2. a ^ 0 = a (XOR of a number with 0 is the number itself)
XOR is commutative and associative, so the order of operations does not matter. Thus, XORing all numbers together will cancel out the duplicates and leave the single number.
*/
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans=0;
       for(int x:nums)
           ans=ans^x;
           return ans;

    }
};