/*

Author : Zishan Khan
Problem : Rotate String
Difficulty : Easy
Problem Link : https://leetcode.com/problems/rotate-string/description/?envType=daily-question&envId=2024-11-03

*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        return (s + s).find(goal) != string::npos;
    }
};