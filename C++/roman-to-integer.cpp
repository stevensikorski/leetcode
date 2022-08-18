/*

@file       roman-to-integer.cpp
@author     stevensikorski
@date       August 17 2022
@brief      13. Roman to Integer

*/

#include "header.h"

class Solution
{
    public:
        int romanToInt(string s)
        {
            int sum = 0, first = 0, second = 0;

            if (s.length() < 1 || s.length() > 15) {return sum;}

            switch (s[0])
            {
                case 'I': first = 1; break;
                case 'V': first = 5; break;
                case 'X': first = 10; break;
                case 'L': first = 50; break;
                case 'C': first = 100; break;
                case 'D': first = 500; break;
                case 'M': first = 1000; break;
                default: first = 0; break;
            }

            switch (s[1])
            {
                case 'I': second = 1; break;
                case 'V': second = 5; break;
                case 'X': second = 10; break;
                case 'L': second = 50; break;
                case 'C': second = 100; break;
                case 'D': second = 500; break;
                case 'M': second = 1000; break;
                default: second = 0; break;
            }

            if (first < second)
            {
                sum += second - first;
                sum += romanToInt(s.substr(2, s.length()));
            }
            else
            {
                sum += first;
                sum += romanToInt(s.substr(1, s.length()));
            }

            return sum;
        }
};