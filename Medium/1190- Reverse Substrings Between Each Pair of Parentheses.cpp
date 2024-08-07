/*

Author : Zishan Khan
Problem : Reverse Substrings Between Each Pair of Parentheses
Difficulty : Medium
Problem Link : https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/?envType=daily-question&envId=2024-07-11

*/

class Solution {
public:
        string reverseParentheses(string s) {
        vector<int> opened;
        string res;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(')
                opened.push_back(res.length());
            else if (s[i] == ')') {
                int j = opened.back();
                opened.pop_back();
                reverse(res.begin() + j, res.end());
            } else {
                res += s[i];
            }
        }
        return res;
    }
};
