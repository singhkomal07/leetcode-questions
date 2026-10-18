
/*DATE:18.10.26
PROBLEM LINK:https://leetcode.com/problems/concatenation-of-array/
PROBLEM STATEMENT:Concatenate an array with itself.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves creating a new array and populating it with the elements of the original array twice.
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        for(int i =0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
};