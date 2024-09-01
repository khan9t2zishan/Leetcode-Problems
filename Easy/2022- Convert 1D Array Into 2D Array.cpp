/*

Author : Zishan Khan
Problem : Convert 1D Array Into 2D Array
Difficulty : Easy
Problem Link : https://leetcode.com/problems/convert-1d-array-into-2d-array/description/?envType=daily-question&envId=2024-09-01

*/

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m*n) 
            return {};
        vector<vector<int>> ans(m, vector<int>(n,0));
        int k = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ans[i][j] = original[k++];
            }
        }
        return ans;
    }
};
