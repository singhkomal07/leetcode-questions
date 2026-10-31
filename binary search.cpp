
/*DATE:31.10.26
PROBLEM LINK:https://leetcode.com/problems/binary-search/
PROBLEM STATEMENT:Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
INSIGHTS GAIN FROM THIS QUESTION: Use binary search to efficiently find the target element in a sorted array.
Time complexity: O(log n) where n is the number of elements in the array.
*/
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if (nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
        
    }
};