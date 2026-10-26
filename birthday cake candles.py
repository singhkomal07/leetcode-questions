 
"""DATE:22.09.26
PROBLEM LINK:https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true
PROBLEM STATEMENT:You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest candles.

INSIGHTS GAIN FROM THIS QUESTION:
Understand how to find the maximum value in a list and count its occurrences.
"""
def birthdayCakeCandles(candles):
    tallest = max(candles)
    count = 0

    for i in candles:
        if i == tallest:
            count += 1

    return count
