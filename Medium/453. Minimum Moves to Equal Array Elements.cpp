/*

Author : Zishan Khan
Problem : Minimum Moves to Equal Array Elements
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/

*/

class Solution {
public:
    int minMoves(vector<int>& nums) {

        int min=*min_element(nums.begin(),nums.end());

        int len=nums.size();

        for(int i=0;i<len;i++)
        {
           int subtraction=(nums[i]-min);
           nums[i]=subtraction;
        }
        int ans=accumulate(nums.begin(),nums.end(),0);
        return ans;
    }
};
