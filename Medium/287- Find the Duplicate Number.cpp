/*

Author : Zishan Khan
Problem : Find the Duplicate Number
Difficulty : Medium
Problem Link : https://leetcode.com/problems/find-the-duplicate-number/description/?envType=daily-question&envId=2024-03-24

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         
        int slow=nums[0];
        int fast=nums[0];
        
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        
        return slow; 
    }
};
