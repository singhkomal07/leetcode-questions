 
"""DATE:05.10.26
PROBLEM LINK:https://leetcode.com/problems/valid-palindrome-ii/
PROBLEM STATEMENT:Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

INSIGHTS GAIN FROM THIS QUESTION:
use two pointers to compare characters from the beginning and end of the string, moving towards the center. 
left + 1   # skip/delete left character
right - 1  # skip/delete right character
        mismatch
           ↓
      b       c
      ↑       ↑
     left    right
      ↓       ↓
  skip left  skip right
      ↓       ↓
    check    check
      └───┬───┘
          ↓
       either ✓
"""
def validPalindrome(self, s):
        left=0
        right=len(s)-1
        while left < right:
                if s[left] != s[right]:
                    return (self.isPalindrome(s,left+1,right) or
                           self.isPalindrome(s,left,right-1))
                left+=1
                right-=1
        return True
def isPalindrome(self,s,left,right):
        while left< right:
            if s[left]!=s[right]:
                   return False
            left+=1
            right-=1
        return True

            
        