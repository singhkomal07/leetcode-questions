
"""DATE:03.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/the-minion-game/problem?isFullScreen=true
PROBLEM STATEMENT:Both players are given the same string. They have to make substrings using the given string. Stuart makes words starting with consonants, Kevin makes words starting with vowels. The game ends when both players have made all possible substrings.

INSIGHTS GAIN FROM THIS QUESTION:Need to calculate the score for each player based on the number of substrings they can create starting with vowels or consonants.
"""
def minion_game(string):
    vowels="AEIOU"
    Kevin=0
    Stuart=0
    n=len(string)
    for i in range(n):
        score=n-i
        if string[i] in vowels:
            Kevin+=score
        else:
            Stuart+=score
    if Kevin>Stuart:
        print("Kevin",Kevin)
    elif Stuart>Kevin:
        print("Stuart",Stuart)
    else:
        print("Draw")
if __name__ == '__main__':
    s = input()
    minion_game(s)