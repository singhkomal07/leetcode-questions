
/*DATE:29.10.26
PROBLEM LINK:https://leetcode.com/problems/longest-common-prefix/
PROBLEM STATEMENT:Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
INSIGHTS GAIN FROM THIS QUESTION: Compare characters of each string at the same index until a mismatch is found.
Time complexity: O(n*m) where n is the number of strings and m is the length of the shortest string.
*/
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        for(int i=0;i<strs[0].length();++i){
            char c=strs[0][i];
            for(int j=1;j<strs.size();++j){
                if(i==strs[j].length()||strs[j][i]!=c){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
        
    }
};