/*

Author : Zishan Khan
Problem : Trapping Rain Water
Difficulty : Hard
Problem Link : https://leetcode.com/problems/trapping-rain-water/description/?envType=daily-question&envId=2024-04-12

*/

class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1, water = 0, minHeight = 0;
        while (l < r) {
            while (l < r && height[l] <= minHeight) {
                water += minHeight - height[l++];
            }
            while (l < r && height[r] <= minHeight) {
                water += minHeight - height[r--];
            }
            minHeight = min(height[l], height[r]);
        }
        return water;
    }
};
