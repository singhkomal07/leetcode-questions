
/*DATE:15.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/lonely-integer/problem
PROBLEM STATEMENT:Given an array of integers, where all elements but one occur twice, find the unique element.

INSIGHTS GAIN FROM THIS QUESTION: XOR property: x ^ x = 0 and x ^ 0 =x.
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; 
int lonelyinteger(vector<int> a) {
    int result=0;
    for(int num:a){
        result^=num;
    }
    return result;
}
