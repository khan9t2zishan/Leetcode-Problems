/*

Author : Zishan Khan
Problem : Minimum Bit Flips to Convert Number
Difficulty : Easy
Problem Link : https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/?envType=daily-question&envId=2024-09-11

*/

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorResult = start ^ goal;
        int ans = 0;
        
        
        while (xorResult > 0) {
            ans += xorResult & 1; 
            xorResult >>= 1;
        }
        
        return ans;
    }
};
