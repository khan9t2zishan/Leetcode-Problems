/*

Author : Zishan Khan
Problem : Subarray Sums Divisible by K
Difficulty : Easy
Problem Link : https://leetcode.com/problems/subarray-sums-divisible-by-k/description/?envType=daily-question&envId=2024-06-09

*/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sums(k, 0);
        sums[0]++;
        int cnt = 0;
        int currSum = 0;
        for(int i = 0; i<n; i++) {
            currSum = (currSum + nums[i]%k + k)%k;
            cnt += sums[currSum];
            sums[currSum]++;
        }
        return cnt;
    }
};
