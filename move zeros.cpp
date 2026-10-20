
/*DATE:21.10.26
PROBLEM LINK:https://leetcode.com/problems/move-zeroes/
PROBLEM STATEMENT:Move all zeros to the end of the array while maintaining the relative order of non-zero elements.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves using a two-pointer technique to efficiently move zeros to the end.
*/
#include <bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};