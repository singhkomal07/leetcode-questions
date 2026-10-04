"""
DATE: 30-09-2026

PROBLEM LINK:
https://leetcode.com/problems/fibonacci-number/

PROBLEM STATEMENT:
The Fibonacci numbers are defined as:
F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2)

Given n, calculate F(n).


============================================

INSIGHTS GAIN FROM THIS QUESTION:
- Fibonacci can be solved using recursion.
- Base cases are n = 0 and n = 1.
- For every other n, add the previous two Fibonacci numbers.
- Recursive problems need a clear base case.
"""
class Solution(object):
    def fib(self, n):
        if n==0:
            return 0

        elif n==1:
            return 1
        
        return self.fib(n-1)+self.fib(n-2)