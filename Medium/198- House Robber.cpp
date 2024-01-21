/*

Author : Zishan Khan
Problem : House Robber
Difficulty : Medium
Problem Link : https://leetcode.com/problems/house-robber/description/?envType=daily-question&envId=2024-01-21

*/

class Solution {
public: 
    int rob(vector<int>& nums) {
        int n = nums.size(), pre = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            int temp = max(pre + nums[i], cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }
};
