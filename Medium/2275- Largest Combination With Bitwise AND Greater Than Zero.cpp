/*

Author : Zishan Khan
Problem : Largest Combination With Bitwise AND Greater Than Zero
Difficulty : Medium
Problem Link : https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/description/?envType=daily-question&envId=2024-11-07

*/

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size(),ans = 0;
        for(int i=0;i<32;i++){
            int cnt = 0;
            for(auto candidate : candidates){
                if(candidate & (1<<i))cnt++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};
