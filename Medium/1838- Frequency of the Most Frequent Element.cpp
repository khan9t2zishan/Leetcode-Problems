/*

Author : Zishan Khan
Problem : Frequency of the Most Frequent Element
Difficulty : Medium
Problem Link : https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/?envType=daily-question&envId=2023-11-18
*/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
         sort(begin(nums), end(nums));
        
        int n = nums.size();
        
        int result = 0;
        
        int i = 0;
        long currSum = 0;
        
        for(int j = 0; j<n; j++) {
            
            long target = nums[j];
            currSum   += nums[j];
            
            while((j-i+1)*target - currSum > k) {
                currSum -= nums[i];
                i++;
            }
            
            result = max(result, j-i+1);
            
        }
        return result;
    }
};
