/*

Author : Zishan Khan
Problem : Minimum Number of Pushes to Type Word II
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/description/?envType=daily-question&envId=2024-08-06

*/

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> letterFreq(26, 0);
        for (char c : word) {
            letterFreq[c - 'a']++;
        }
        
        sort(letterFreq.rbegin(), letterFreq.rend());
        
        int totalPresses = 0;
        for (int i = 0; i < 26; i++) {
            if (letterFreq[i] == 0) break;
            totalPresses += (i / 8 + 1) * letterFreq[i];
        }
        
        return totalPresses;
    }
};
