 
"""DATE:11.09.26
PROBLEM LINK:https://leetcode.com/problems/subsets/
PROBLEM STATEMENT:Given a set of distinct integers, nums, return all possible subsets (the power set).

INSIGHTS GAIN FROM THIS QUESTION:backtracking is a good approach to generate all possible subsets. We can use a recursive function to explore each element, deciding whether to include it in the current subset or not. By keeping track of the starting index, we can avoid duplicates and ensure that we only consider each element once in the current subset.
"""
class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result=[]
        def backtrack(start,current):
            result.append(current[:])
            for i in range(start,len(nums)):
                current.append(nums[i])
                backtrack(i+1,current)
                current.pop()
        backtrack(0,[])
        return result