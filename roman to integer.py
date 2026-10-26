
"""DATE:24.09.26
PROBLEM LINK:https://leetcode.com/problems/roman-to-integer/
PROBLEM STATEMENT:You are given a Roman numeral string, return its integer value.

INSIGHTS GAIN FROM THIS QUESTION:Need to understand the rules of Roman numerals and how to handle subtraction cases.
"""
class Solution(object):
    def romanToInt(self, s):
        values={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        total=0
        previous=0
        for symbol in reversed(s):
            current=values[symbol]
            if current<previous:
                total-=current
            else:
                total+=current
                previous = current
        return total
 