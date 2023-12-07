/*

Author : Zishan Khan
Problem : Largest Odd Number in String
Difficulty : Easy
Problem Link : https://leetcode.com/problems/largest-odd-number-in-string/description/?envType=daily-question&envId=2023-12-07

*/

class Solution {
public:
    string largestOddNumber(string num) {
        if (num.back() % 2 == 1) return num;
        int i = num.length() - 1;
        while (i >= 0) {
            int n = num[i];
            if (n % 2 == 1) return num.substr(0, i + 1);
            i--;
        }
        return "";
    }
};
