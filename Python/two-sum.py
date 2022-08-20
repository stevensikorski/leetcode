# @file       two-sum.py
# @author     stevensikorski
# @date       August 19 2022
# @brief      1. Two Sum

from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mathlist = {}
        for i in range(0, len(nums)):
            value = target - nums[i]
            if (value) in mathlist:
                return [mathlist[value], i]
            mathlist[nums[i]] = i
            

print(Solution().twoSum([3,2,3], 6))