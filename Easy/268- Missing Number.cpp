/*

Author : Zishan Khan
Problem : Missing Number
Difficulty : Easy
Problem Link : https://leetcode.com/problems/missing-number/solutions/?envType=daily-question&envId=2024-02-20

*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum=accumulate(nums.begin(),nums.end(),0);

        int max=nums.size();
          

        int add=0;

        for(int i=0;i<=max;i++)
         {
             add=add+i;
         }
       
        int ans=add-sum;
        return ans;
    }
   
};
     
 
