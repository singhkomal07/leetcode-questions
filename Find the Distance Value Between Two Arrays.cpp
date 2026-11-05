/*DATE:5.11.26
PROBLEM LINK:https://leetcode.com/problems/find-the-distance-value-between-two-arrays/?envType=daily-question&envId=2026-11-05
PROBLEM STATEMENT: Given two integer arrays arr1 and arr2, and an integer d, return the distance value between the two arrays.
The distance value is defined as the number of elements arr1[i] such that there is not
INSIGHTS GAIN FROM THIS QUESTION:Sorting + Binary Search: Sort arr2, then efficiently find whether any element lies within [x-d, x+d].
 */
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;

        for (int x : arr1) {
            bool valid = true;

            for (int y : arr2) {
                if (abs(x - y) <= d) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count++;
            }
        }

        return count;
    }
};
