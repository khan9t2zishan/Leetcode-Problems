/*

Author : Zishan Khan
Problem : Minimum Add to Make Parentheses Valid
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/?envType=daily-question&envId=2024-10-09

*/

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> S;
        int c = 0;
        for (char i : s) {
            if (i == '(')
                S.push(i);
            else {
                if (S.empty())
                    c++;
                else
                    S.pop();
            }
        }
        return c + S.size();
    }
};
