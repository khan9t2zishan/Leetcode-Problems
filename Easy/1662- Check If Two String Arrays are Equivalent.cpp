/*

Author : Zishan Khan
Problem : Check If Two String Arrays are Equivalent
Difficulty : Easy
Problem Link : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/?envType=daily-question&envId=2023-12-01

*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string s1 = "";
        string s2 = "";

        for(const string& s : word1)
            s1 += s;
        for(const string& s : word2)
            s2 += s;

        return s1==s2;  
    }
};
