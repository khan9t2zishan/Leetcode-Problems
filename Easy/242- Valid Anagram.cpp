/*

Author : Zishan Khan
Problem : Valid Anagram
Difficulty : Easy
Problem Link : https://leetcode.com/problems/valid-anagram/description/?envType=daily-question&envId=2023-12-16

*/

class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       if(s==t)
       return true;
       else
       return false;
    }
};
