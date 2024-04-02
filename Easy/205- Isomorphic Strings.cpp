/*

Author : Zishan Khan
Problem : Isomorphic Strings
Difficulty : Easy
Problem Link : https://leetcode.com/problems/isomorphic-strings/?envType=daily-question&envId=2024-04-02

*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256] = {0}, m2[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};
