/*

Author : Zishan Khan
Problem : Count Subarrays Where Max Element Appears at Least K Times
Difficulty : Medium
Problem Link : https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/?envType=daily-question&envId=2024-03-29

*/

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int mx=*max_element(begin(nums),end(nums));
        long long ans=0;
        
        int l=0,r=0,n=size(nums);
        while(r<n){
            k-=(nums[r++]==mx);
            while(k==0){
                k+=(nums[l++]==mx);
            }
            ans+=l;
        }
        return ans;
    }
};
