/*DATE:13.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/recursive-digit-sum/problem
PROBLEM STATEMENT:Given a string representing a number and an integer k, find the super digit of the number formed by repeating the string k times.

INSIGHTS GAIN FROM THIS QUESTION: The super digit is calculated by recursively summing the digits until a single digit is obtained.
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; 
int superDigit(string n, int k) {
    long long sum=0;
    for(char ch:n){
        sum+=ch-'0';
    }
    sum*=k;
    if (sum<10){
        return sum;
    }
    return superDigit(to_string(sum),1);
}