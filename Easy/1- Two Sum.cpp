/*

Author : Zishan Khan
Problem : Two Sum
Difficulty : Easy
Problem Link : https://leetcode.com/problems/two-sum/description/

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n= nums.size();
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(nums[i]+nums[j]==target)
         return{i,j};
        }
    }
    return{};
    }
};
