/*

Author : Zishan Khan
Problem : Minimum Number of Changes to Make Binary String Beautiful
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/?envType=daily-question&envId=2024-11-05

*/

class Solution {
public:
    int minChanges(const std::string& s) {
    int count = 0;
    for (int i = 0; i < s.size() - 1; i += 2) {
        if (s[i] != s[i + 1]) {
            count++;
        }
    }
    return count;
}
};


