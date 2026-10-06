
"""DATE:07.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
PROBLEM STATEMENT:There is a game where you are given an array of clouds represented by 0 and 1.
- 0 represents a safe cloud.
- 1 represents a dangerous cloud that you cannot land on.
You start at the first cloud (index 0) and need to reach the last cloud.
From your current position, you can jump either 1 cloud or 2 clouds forward, but you can only land on a safe cloud (0).
Your task is to determine the minimum number of jumps needed to reach the last cloud.

 

INSIGHTS GAIN FROM THIS QUESTION:HERE JUMP COUNTS MOVEMENT NOT POSITION.
Eg. If you are at index 0 and jump to index 2, that's one jump, not two.
"""
def jumpingOnClouds(c):
    i=0
    jumps=0
    while i< len(c)-1:
        if i+2<len(c) and c[i+2]==0:
            i+=2
        else:
            i+=1
        jumps+=1
    return jumps