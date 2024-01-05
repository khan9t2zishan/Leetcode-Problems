/*

Author : Zishan Khan
Problem : Longest Increasing Subsequence
Difficulty : Medium
Problem Link : https://leetcode.com/problems/longest-increasing-subsequence/description/?envType=daily-question&envId=2024-01-05

*/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(), ans = INT_MIN;
        vector<int>dp(n, 1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++)
                if(nums[i] > nums[j]) dp[i] = max(dp[i], 1+dp[j]);
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
