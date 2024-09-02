/*

Author : Zishan Khan
Problem : Find the Student that Will Replace the Chalk
Difficulty : Medium
Problem Link : https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/description/?envType=daily-question&envId=2024-09-02

*/

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long accSum = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= accSum; 

        for (int i = 0; i < chalk.size(); ++i) {
            if (chalk[i] > k) {
                return i;  
            }
            k -= chalk[i];
        }
        return -1;  
    }
};
