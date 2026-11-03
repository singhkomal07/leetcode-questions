/*DATE:03.11.26
PROBLEM LINK:https://leetcode.com/problems/intersection-of-two-arrays/?envType=daily-question&envId=2026-11-03
PROBLEM STATEMENT:Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
INSIGHTS GAIN FROM THIS QUESTION:irst break → Stops checking nums3 after finding a duplicate.
Second break → Stops checking nums2 after finding a match.  */
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
               if(nums1[i]==nums2[j]){ 
                bool found=false;
                for(int k=0;k<nums3.size();k++){
                    if(nums3[k]==nums1[i]){
                        found =true;
                        break;
                    }
                }
                if(!found){
                    nums3.push_back(nums1[i]);
                }
                break;
            }
   

            }
        }
        return nums3;
    }
};