/*

Author : Zishan Khan
Problem : Number of 1 Bits
Difficulty : Easy
Problem Link : https://leetcode.com/problems/number-of-1-bits/description/?envType=daily-question&envId=2023-11-29
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
         int count = 0;
        
        for(int i = 31; i>=0; i--) {
            if(((n >> i) & 1) == 1) {
                count++;
            }
        }
        
        return count;
    }
};
