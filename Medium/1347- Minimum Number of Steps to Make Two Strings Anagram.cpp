/*

Author : Zishan Khan
Problem : Minimum Number of Steps to Make Two Strings Anagram
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/?envType=daily-question&envId=2024-01-13

*/

class Solution {
public:
    int minSteps(string s, string t) {
      vector<int> f(26, 0);
        
        for(auto i : s)
            ++f[i - 'a'];
        for(auto i : t)
            --f[i - 'a'];
        
        int ans = 0;
        
        for(int i = 0; i < 26; i++){
            ans += f[i] < 0 ? -f[i] : 0;
        }
        
        return ans;   
    }
};
