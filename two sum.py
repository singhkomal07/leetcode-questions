
"""DATE:23.09.26
PROBLEM LINK:https://leetcode.com/problems/two-sum/
PROBLEM STATEMENT:You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
INSIGHTS GAIN FROM THIS QUESTION:Need to use a hash map to store the indices of elements we've seen so far.
"""
class Solution:
    def twoSum(self, nums, target):
        seen={}
        for i,num in enumerate(nums):
            needed=target-num
            if needed in seen:
                return[seen[needed],i]
            seen[num]=i