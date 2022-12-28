// @file       container-with-most-water.cs
// @author     stevensikorski
// @date       December 27 2022
// @brief      11. Container With Most Water

public class Solution {
    public int MaxArea(int[] height)
    {
        int max = 0; 
        int left = 0;
        int right = height.Length - 1;
        while (left < right) // Iterate through by comparing left/right
        {
            int area = (right - left) * Math.Min(height[left], height[right]); // We calculate the gap * minimum of both heights
            max = Math.Max(max, area); // Get the maximum

            if (height[left] < height[right]) // If left is smaller, bring it closer to the middle
            {
                left++;
            }
            else // Else (if right is smaller or equal to left), bring it closer to the middle
            {
                right--;
            }
        }

        return max;
    }
}