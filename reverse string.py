
"""DATE:29.09.26
PROBLEM LINK:https://leetcode.com/problems/reverse-string/
PROBLEM STATEMENT:Write a function that reverses a string. The input string is given as an array of characters s.

INSIGHTS GAIN FROM THIS QUESTION:Need to swap characters from both ends towards the center.
"""
class Solution(object):
    def reverseString(self, s):
        def reverseString(left,right):
            if left>=right:
               return 
            s[left],s[right]=s[right],s[left]
            reverseString(left+1,right-1)
        reverseString(0,len(s)-1)