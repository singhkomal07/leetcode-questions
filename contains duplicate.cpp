/*DATE:22.10.26
PROBLEM LINK:https://leetcode.com/problems/contains-duplicate/?envType=problem-list-v2&envId=array
PROBLEM STATEMENT:Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
INSIGHTS GAIN FROM THIS QUESTION:can be done with or without sorting.
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]==nums[i]){
                    return true;
                }
                break;
            }
        }
      
    
    return false;
    }
};