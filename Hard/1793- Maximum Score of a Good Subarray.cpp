/*

Author : Zishan Khan
Date : 22/10/2023
Problem : Maximum Score of a Good Subarray
Difficulty : Medium
Problem Link : https://leetcode.com/problems/maximum-score-of-a-good-subarray/description/?envType=daily-question&envId=2023-10-22

*/

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int mn = nums[k], i = k, j = k, res = nums[k];
    do {
        if (i > 0 && j < nums.size() - 1) {
          if (nums[i - 1] >= nums[j + 1])
                --i;
            else
                ++j;
        }
        else if (i == 0 && j < nums.size() - 1)
            ++j;
        else if (j == nums.size() - 1 && i > 0)
            --i;
        mn = min({mn, nums[i], nums[j]});
        res = max(res, mn * (j - i + 1));            
    }
    while (i > 0 || j < nums.size() - 1); 
    return res;
    }
};
