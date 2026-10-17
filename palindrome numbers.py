 
"""DATE:17.09.26
PROBLEM LINK:https://leetcode.com/problems/palindrome-number/
PROBLEM STATEMENT:Given an integer x, determine if it is a palindrome.

INSIGHTS GAIN FROM THIS QUESTION:
Before reversing an entire number, check whether reversing only half is sufficient.
"""
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 or (x%10==0 and x!=0):
            return False
        reversed_half=0
        while x > reversed_half:
            reversed_half=(reversed_half*10)+(x % 10)
            x = x//10
        return x == reversed_half or x == reversed_half//10