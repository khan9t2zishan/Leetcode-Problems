/*

Author : Zishan Khan
Problem : Majority Element
Difficulty : Easy
Problem Link : https://leetcode.com/problems/majority-element/description/?envType=daily-question&envId=2024-02-12

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
