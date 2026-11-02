
/*DATE:02.11.26
PROBLEM LINK:https://leetcode.com/problems/plus-one/
PROBLEM STATEMENT:You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.

INSIGHTS GAIN FROM THIS QUESTION: When an array consists entirely of nines (like [9, 9, 9]), every single digit rolls over to 0. The final answer requires adding a new digit at the front (becoming [1, 0, 0, 0]).
Using standard vector insertion like digits.insert(digits.begin(), 1) is highly inefficient because it forces the computer to move every single existing 0 one slot to the right in memory.
*/
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
           if(digits[i]<9){
            digits[i]++;
            return digits;
           }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
        
    }
};