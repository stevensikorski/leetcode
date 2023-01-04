// @file       median-of-two-sorted-arrays.cpp
// @author     stevensikorski
// @date       January 4 2023
// @brief      4. Median of Two Sorted Arrays

#include "header.hpp"

class Solution
{
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            for (int i = 0; i < nums2.size(); i++) // Combine both arrays
            {
                nums1.push_back(nums2.at(i));
            }

            for (int i = 0; i < nums1.size(); i++) // Sort the combined array
            {
                for (int j = i + 1; j < nums1.size(); j++)
                {
                    if (nums1[i] > nums1[j])
                    {
                        int temp = nums1[i];
                        nums1[i] = nums1[j];
                        nums1[j] = temp;
                    }
                }
            }

            // Find the middle with ternary based if there is a even/odd number of elements in the array (Condition? Odd : Even)
            return (nums1.size() % 2)? (double)nums1[nums1.size() / 2] : (double)(nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2;
        }
};