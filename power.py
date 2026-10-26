"""DATE:30.09.26
PROBLEM LINK:https://leetcode.com/problems/powx-n/
PROBLEM STATEMENT:Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

INSIGHTS GAIN FROM THIS QUESTION:Need to handle negative exponents and optimize the calculation using exponentiation by squaring.
"""
class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        return x**n