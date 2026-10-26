 
"""DATE:09.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/string-validators/problem?isFullScreen=true
PROBLEM STATEMENT:Given a string, determine if it is a valid identifier.

INSIGHTS GAIN FROM THIS QUESTION:
Understand the properties of valid identifiers in Python.
"""
if __name__ == '__main__':
    s = input()
    an=False
    al=False
    ad=False
    l=False
    u=False
    for ch in s:
       if ch.isalnum():
          an=True
         
       if ch.isalpha():
            al=True
          
       if ch.isdigit():
            ad=True
            
       if ch.islower():
            l=True
           
       if ch.isupper():
            u=True
           
    print(an)
    print(al)
    print(ad) 
    print(l)
    print(u)
