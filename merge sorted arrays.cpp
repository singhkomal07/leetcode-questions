
/*DATE:23.10.26
PROBLEM LINK:https://leetcode.com/problems/merge-sorted-array/?envType=problem-list-v2&envId=array
PROBLEM STATEMENT:Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
INSIGHTS GAIN FROM THIS QUESTION: The key insight is to merge the arrays from the end to the beginning, which avoids overwriting elements in nums1 that haven't been processed yet.
use three pointers: one for the end of nums1, one for the end of nums2, and one for the end of the merged array. Compare elements from the end of both arrays and place the larger one at the end of nums1. Continue this process until all elements from nums2 have been merged into nums1.
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while( i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;

            }else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        } 
        while(j>=0){
            nums1[k]=nums2[j];
        j--;
        k--;       
    }
    }
};