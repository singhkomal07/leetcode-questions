
/*DATE:20.09.26
PROBLEM LINK:https://www.geeksforgeeks.org/problems/bubble-sort/1
PROBLEM STATEMENT:Sort an array using the bubble sort algorithm.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves repeatedly swapping adjacent elements if they are in the wrong order.
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
using namespace std;
class Solution {
public:
    void bubbleSort(vector<int> & arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};