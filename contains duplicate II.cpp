/*DATE:04.11.26
PROBLEM LINK:
PROBLEM STATEMENT: 
INSIGHTS GAIN FROM THIS QUESTION:
 
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] && j-i<=k){
                    return true;
                }
            }
        }
        return false;
        
    }
};*/
#include <bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (s.count(nums[i])) {
                return true;
            }
            s.insert(nums[i]);
            if (s.size() > k) {
                s.erase(nums[i - k]);
            }
        }
        return false;
    }
};
