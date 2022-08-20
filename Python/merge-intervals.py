# @file       merge-intervals.py
# @author     stevensikorski
# @date       August 19 2022
# @brief      56. Merge Intervals

from typing import List

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        i = 0
        length = len(intervals) - 1

        intervals.sort()
        
        while (i < length):
            if (intervals[i][1] >= intervals[i+1][0]):
                intervals[i+1] = min(intervals[i][0], intervals[i+1][0]), max(intervals[i][1], intervals[i+1][1])
                intervals.pop(i)
                length -= 1
            else:
                i += 1

        return intervals