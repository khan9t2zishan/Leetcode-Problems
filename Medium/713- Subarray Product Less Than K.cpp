/*

Author : Zishan Khan
Problem : Subarray Product Less Than K
Difficulty : Medium
Problem Link : https://leetcode.com/problems/subarray-product-less-than-k/description/?envType=daily-question&envId=2024-03-27

*/

class Solution {
public:
  int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int left = 0, right = 0, product = 1, count = 0;
    int n = nums.size();
    if(k <= 1) return 0;
    while (right < n) {
      product *= nums[right];
      while (product >= k) product /= nums[left++];
      count += 1 + (right - left);
      right++;
    }
    return count;
  }
};
