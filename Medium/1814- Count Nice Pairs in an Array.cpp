/*

Author : Zishan Khan
Problem : Count Nice Pairs in an Array
Difficulty : Medium
Problem Link : https://leetcode.com/problems/count-nice-pairs-in-an-array/description/?envType=daily-question&envId=2023-11-21

*/

class Solution {
public:
    int M = 1e9+7;
    int reverse(int num) {
        int rev = 0;
        
        while(num > 0) {
            int rem = num%10;
            rev = rev*10 + rem;
            num /= 10;
        }
        
        return rev;
    }
    
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int> mp;
        
        //nums[i] - rev(nums[i]) ==  nums[j] - rev(nums[j])
        for(int i = 0; i<n; i++) {
            nums[i] = nums[i] - reverse(nums[i]);
        }
        
        int result = 0;
        for(int i = 0; i<n; i++) {
            
            result = (result + mp[nums[i]]) % M;
            
            mp[nums[i]]++;
        }
        
        return result;
    }
};
