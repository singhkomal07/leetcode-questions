
"""DATE:26.09.26
PROBLEM LINK:https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem?isFullScreen=true
PROBLEM STATEMENT:Given a list of integers, find the second maximum value.

INSIGHTS GAIN FROM THIS QUESTION:Need to handle duplicates and find the second largest unique value.
"""
if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr=list(set(arr))
    arr.sort()
    print(arr[-2]) 
