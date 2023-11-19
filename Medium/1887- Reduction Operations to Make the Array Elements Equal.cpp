/*

Author : Zishan Khan
Problem : Reduction Operations to Make the Array Elements Equal
Difficulty : Medium
Problem Link : https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/description/?envType=daily-question&envId=2023-11-19

*/

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int ans = 0;
        for (int i = size - 1; i > 0; --i) {
            if (nums[i - 1] != nums[i]) {
                ans += size - i;
            }
        }
        return ans;
    }
};
