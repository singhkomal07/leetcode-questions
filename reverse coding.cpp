/*DATE:16.09.26
PROBLEM LINK:https://www.geeksforgeeks.org/problems/reverse-coding2452/1
PROBLEM STATEMENT:Given an integer n, compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves using a simple loop to iterate from 1 to n and accumulate the sum. This is a straightforward implementation of the arithmetic series formula, but in this case, we are using iteration to compute the sum.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum=0;
    for(int i=1;i<=n;i++){
      sum+=i;}
      cout<<sum;
return 0;
}