

/*DATE:19.10.26
PROBLEM LINK:https://leetcode.com/problems/rotate-array/
PROBLEM STATEMENT:Rotate an array to the right by k steps.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves reversing the entire array, then reversing the first k elements, and finally reversing the remaining elements.
k=k%n is used to handle cases where k is greater than the size of the array, ensuring that we only rotate the array by the necessary number of steps.
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};