/*

Author : Zishan Khan
Problem : Minimum String Length After Removing Substrings
Difficulty : Easy
Problem Link : https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/?envType=daily-question&envId=2024-10-07

*/

class Solution {
public:
    int minLength(string s) {
        stack<char> stack;

        for (int i = 0; i < s.length(); i++) {
            char cur_char = s[i];

            if (stack.empty()) {
                stack.push(cur_char);
                continue;
            }

            if (cur_char == 'B' && stack.top() == 'A') {
                stack.pop();
            }
            else if (cur_char == 'D' && stack.top() == 'C') {
                stack.pop();
            }
            else {
                stack.push(cur_char);
            }
        }

        return stack.size();
    }
};
