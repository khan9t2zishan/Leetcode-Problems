/*

Author : Zishan Khan
Problem : Pass the Pillow
Difficulty : Easy
Problem Link : https://leetcode.com/problems/pass-the-pillow/description/?envType=daily-question&envId=2024-07-06

*/

class Solution {
public:
        int passThePillow(int n, int time) {
        return n - abs(n - 1 - time % (n * 2 - 2));
    }
};
