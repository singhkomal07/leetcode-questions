
"""DATE:04.10.26
PROBLEM LINK:https://leetcode.com/problems/valid-palindrome/
PROBLEM STATEMENT:Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

INSIGHTS GAIN FROM THIS QUESTION:
use two pointers to compare characters from the beginning and end of the string, moving towards the center. 
.isalnum() to ignore spaces, punctuation, and special characters.
"""
def isPalindrome(self, s):
        left=0
        right=len(s)-1
        while left < right:
            while left < right and not s[left].isalnum():
                    left+=1
            while left<right and not s[right].isalnum():
                    right-=1
            if s[left].lower()!=s[right].lower():
                   return False
            left+=1
            right -=1
        return True