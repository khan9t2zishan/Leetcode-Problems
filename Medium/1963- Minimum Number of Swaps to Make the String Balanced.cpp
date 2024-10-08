/*

Author : Zishan Khan
Problem : Minimum Number of Swaps to Make the String Balanced
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description/?envType=daily-question&envId=2024-10-08

*/

class Solution {
public:
    int minSwaps(string s) {
        int size = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch == '[')
                size++;
            else if (size > 0) 
                size--;
            
        }
        return (size + 1)/2;
    }
};
