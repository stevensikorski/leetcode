// @file       roman-to-integer.cpp
// @author     stevensikorski
// @date       December 27 2022
// @brief      118. Pascal's Triangle

#include <header.hpp>

class Solution {
    public:
        vector<vector<int>> generate(int numRows) 
        {
            vector<vector<int>> pascal;
            pascal.push_back({1}); // Row 0

            if (numRows >= 2) pascal.push_back({1, 1}); // Row 1
            else return pascal;

            for (int n = 2; n < numRows; n++) // Row 2 and beyond
            {
                vector<int> temprow;
                temprow.push_back(1); // n choose 0
                for (int k = 1; k < n; k++)
                {
                    temprow.push_back(pascal[n-1][k-1] + pascal[n-1][k]); // Binomial coefficient
                }
                temprow.push_back(1); // n choose n
                pascal.push_back(temprow);
            }

            return pascal;
        }
};