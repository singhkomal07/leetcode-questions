"""DATE:02.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/sherlock-and-squares/problem?isFullScreen=true
PROBLEM STATEMENT:Given two integers a and b, count the number of perfect squares in the inclusive range [a, b].

INSIGHTS GAIN FROM THIS QUESTION:Need to find the number of perfect squares in a given range.
"""
import math
import os
import random
import re
import sys
def squares(a, b):
    
    start=math.ceil(math.sqrt(a))
    end=math.floor(math.sqrt(b))
    if start>end:
      return 0
    return end-start+1