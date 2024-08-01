/*

Author : Zishan Khan
Problem : Number of Senior Citizens
Difficulty : Easy
Problem Link : https://leetcode.com/problems/number-of-senior-citizens/description/?envType=daily-question&envId=2024-08-01

*/

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorCount = 0;
        for (const string& info : details) {
            char tens = info[11];
            char ones = info[12];
            if (tens > '6' || (tens == '6' && ones > '0')) {
                seniorCount++;
            }
        }
        return seniorCount;
    }
};
