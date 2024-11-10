/*

Author : Zishan Khan
Problem : Shortest Subarray With OR at Least K II
Difficulty : Medium
Problem Link : https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/description/?envType=daily-question&envId=2024-11-10

*/

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> bitCount(32, 0);
        int currentOR = 0;
        int left = 0;
        int minLength = INT_MAX;
        
        for (int right = 0; right < n; right++) {
            currentOR |= nums[right];
            
            for (int bit = 0; bit < 32; bit++) {
                if (nums[right] & (1 << bit)) {
                    bitCount[bit]++;
                }
            }
            
            while (left <= right && currentOR >= k) {
                minLength = min(minLength, right - left + 1);
                
                int updatedOR = 0;
                for (int bit = 0; bit < 32; bit++) {
                    if (nums[left] & (1 << bit)) {
                        bitCount[bit]--;
                    }
                    if (bitCount[bit] > 0) {
                        updatedOR |= (1 << bit);
                    }
                }
                currentOR = updatedOR;
                left++;
            }
        }
        
        return minLength == INT_MAX ? -1 : minLength;
    }
};
