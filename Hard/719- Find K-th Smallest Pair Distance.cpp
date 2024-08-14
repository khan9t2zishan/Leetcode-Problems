/*

Author : Zishan Khan
Problem : Find K-th Smallest Pair Distance
Difficulty : Hard
Problem Link : https://leetcode.com/problems/find-k-th-smallest-pair-distance/description/?envType=daily-question&envId=2024-08-14

*/

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 0, high = nums[n - 1] - nums[0];

        auto count_pairs = [&](int max_distance) {
            int count = 0, j = 0;
            for (int i = 0; i < n; ++i) {
                while (j < n && nums[j] - nums[i] <= max_distance) ++j;
                count += j - i - 1;
            }
            return count;
        };

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (count_pairs(mid) < k) low = mid + 1;
            else high = mid;
        }

        return low;
    }
};
