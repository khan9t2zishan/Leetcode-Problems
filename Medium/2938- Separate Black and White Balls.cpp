/*

Author : Zishan Khan
Problem : Separate Black and White Balls
Difficulty : Medium
Problem Link : https://leetcode.com/problems/separate-black-and-white-balls/description/?envType=daily-question&envId=2024-10-15

*/

class Solution {
public:
    long long minimumSteps(string s) {
        long long swap = 0;
        int black = 0; 
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') 
                swap += (long long) black; 
            else
                black++; 
        }
        return swap;
    }
};
