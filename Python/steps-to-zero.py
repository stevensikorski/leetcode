# @file       steps-to-zero.py
# @author     stevensikorski
# @date       August 19 2022
# @brief      1342. Number of Steps to Reduce a Number to Zero

class Solution(object):
    def numberOfSteps(self, num):
        steps = 0
        even = True if num % 2 == 0 else False

        if (num == 0):
            return steps

        steps += 1
        if (even):
            steps += self.numberOfSteps(num / 2)
        else:
            steps += self.numberOfSteps(num - 1)

        return steps  