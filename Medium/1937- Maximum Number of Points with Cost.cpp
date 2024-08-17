/*

Author : Zishan Khan
Problem : Maximum Number of Points with Cost
Difficulty : Medium
Problem Link : https://leetcode.com/problems/maximum-number-of-points-with-cost/description/?envType=daily-question&envId=2024-08-17

*/

class Solution {
public:
   long long maxPoints(vector<vector<int>>& P) {
        long long m = P.size(), n = P[0].size();
        vector<long long> pre(n);
        for (int i = 0; i < n; ++i) pre[i] = P[0][i];
        for (int i = 0; i < m - 1; ++i){
            vector<long long> lft(n, 0), rgt(n, 0), cur(n, 0);
            lft[0] = pre[0];
            rgt[n - 1] = pre[n - 1];
            for (int j = 1; j < n; ++j){
                lft[j] = max(lft[j - 1] - 1, pre[j]);
            }
            for (int j = n - 2; j >= 0; --j){
                rgt[j] = max(rgt[j + 1] - 1, pre[j]);
            }
            for (int j = 0; j < n; ++j){
                cur[j] = P[i + 1][j] + max(lft[j], rgt[j]);
            }
            pre = cur;
        }
        long long ans = 0;
        for (int i = 0; i < n; ++i)
            ans = max(ans, pre[i]);
        return ans;
    }
};
