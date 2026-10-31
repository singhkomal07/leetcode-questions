
/*DATE:28.10.26
PROBLEM LINK:https://leetcode.com/problems/3sum/
PROBLEM STATEMENT:Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

INSIGHTS GAIN FROM THIS QUESTION:first sort the array and then use two pointer approach to find the triplets.
Time complexity: O(n^2)
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int n=nums.size();  
        for(int i=0;i<n-2;i++){
            if(i>0&&nums[i]==nums[i-1])
            continue;
            int left=i+1;
            int right=n-1;
            while(left<right){
                long long sum= 1LL* nums[i]+nums[left]+nums[right];
                if (sum==0){result.push_back({nums[i],nums[left],nums[right]});
                    
                left++;
                right--;
                while(left<right&&nums[left]==nums[left-1])
                left++;
                while(left<right&&nums[right]==nums[right+1])
                right--;
                }
                else if (sum<0){
                    left++;
                }
                else{
                    right--;
                }

            }
        }
        return result;
    }

};
