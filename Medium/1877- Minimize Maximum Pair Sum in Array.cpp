/*

Author : Zishan Khan
Problem : Minimize Maximum Pair Sum in Array
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/?envType=daily-question&envId=2023-11-17

*/

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(begin(nums), end(nums));

        int maxResult = 0;
        
        int i = 0, j = nums.size()-1;
        
        while(i < j) {
            int sum = nums[i] + nums[j];
            
            maxResult = max(maxResult, sum);
            i++;
            j--;
        }
        
        return maxResult; 
    }
};
