
"""DATE:01.10.26
PROBLEM LINK:https://leetcode.com/problems/reverse-integer/
PROBLEM STATEMENT:Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

INSIGHTS GAIN FROM THIS QUESTION:Need to handle overflow conditions and reverse the digits of an integer.
"""
class Solution(object):
    def reverse(self, x):
       
        rev_x=0
        sign=1
        if x<0:
            x=abs(x)
            sign=-1
        while x>0:
                rev_x=rev_x*10 + x%10
                x = x//10
        rev_x = sign*rev_x
        if rev_x < -(2**31) or rev_x > (2**31)-1:
            return 0
        return rev_x 
            