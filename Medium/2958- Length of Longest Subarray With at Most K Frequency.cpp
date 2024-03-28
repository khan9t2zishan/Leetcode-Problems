/*

Author : Zishan Khan
Problem : Length of Longest Subarray With at Most K Frequency
Difficulty : Medium
Problem Link : https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/submissions/1216495967/?envType=daily-question&envId=2024-03-28

*/

class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        cout.tie(NULL);
    }
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int l = 0, r = 0, cnt {};
        while(r < n)
        {
            int cur = nums[r++];
            mp[cur]++;
            while(l < r && mp[cur] > k)
            {
                mp[nums[l++]]--;
            }
            cnt = max(cnt, r - l);
        }
        return cnt;
    }
};
