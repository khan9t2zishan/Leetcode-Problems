/*

Author : Zishan Khan
Problem : Count the Number of Consistent Strings
Difficulty : Easy
Problem Link : https://leetcode.com/problems/count-the-number-of-consistent-strings/description/?envType=daily-question&envId=2024-09-12

*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // support variable
        int res = words.size();
        bool alpha[26] = {};
        // populating alpha
        for (char c: allowed) alpha[c - 'a'] = true;
        // parsing all the words to see if each character is in alpha
        for (string word: words) {
            // in case we find an unallowed character, we decrease res and break
            for (char c: word) if (!alpha[c - 'a']) {
                res--;
                break;
            }
        }
        return res;
    }
};
