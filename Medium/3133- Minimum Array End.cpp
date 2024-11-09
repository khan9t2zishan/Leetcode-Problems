/*

Author : Zishan Khan
Problem : Minimum Array End
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimum-array-end/description/?envType=daily-question&envId=2024-11-09

*/

class Solution {
public:
    long minEnd(int n, int x) {
        long result = x;
        long remaining = n - 1;
        long position = 1;
        
        while (remaining) {
            if (!(x & position)) {
                result |= (remaining & 1) * position;
                remaining >>= 1;
            }
            position <<= 1;
        }
        
        return result;
    }
};
