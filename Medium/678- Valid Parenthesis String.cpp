/*

Author : Zishan Khan
Problem : Valid Parenthesis String
Difficulty : Medium
Problem Link : https://leetcode.com/problems/valid-parenthesis-string/description/?envType=daily-question&envId=2024-04-07

*/

class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0, leftMax = 0;

        for (char c : s) {
            if (c == '(') {
                leftMin++;
                leftMax++;
            } else if (c == ')') {
                leftMin--;
                leftMax--;
            } else {
                leftMin--;
                leftMax++;
            }
            if (leftMax < 0) return false;
            if (leftMin < 0) leftMin = 0;
        }
        
        return leftMin == 0;
    }
};
