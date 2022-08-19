# @file       fizz-buzz.py
# @author     stevensikorski
# @date       August 18 2022
# @brief      412. Fizz Buzz

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer = []
        for i in range(1, n + 1):
            string = ""
        
            if(i % 3 == 0):
                string += "Fizz"
            if(i % 5 == 0):
                string += "Buzz"
            elif (i % 3 != 0 and i % 5 != 0):
                string += str(i)

            answer.append(string)
        return answer