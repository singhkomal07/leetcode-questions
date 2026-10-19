    
/*DATE:20.10.26
PROBLEM LINK:https://leetcode.com/problems/remove-duplicates-from-sorted-array/
PROBLEM STATEMENT:Remove duplicates from a sorted array.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves using two pointers to traverse the array and overwrite duplicate elements.
here i tracks the position of the last unique element, while j scans through the array to find new unique elements. When a new unique element is found, it is placed in the next position after the last unique element.
*/
#include<bits/stdc++.h>
    #include<vector>
    using namespace std;
    class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if(nums.empty())
            return 0;
            int i=0;
            int n=nums.size();
            for(int j=1;j<n;j++){
                if (nums[j]!=nums[i]){
                    i++;
                    nums[i]=nums[j];
                }
            }
            return i+1;
        }
    };