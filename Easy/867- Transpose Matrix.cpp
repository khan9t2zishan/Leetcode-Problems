/*

Author : Zishan Khan
Problem : Transpose Matrix
Difficulty : Easy
Problem Link : https://leetcode.com/problems/transpose-matrix/description/?envType=daily-question&envId=2023-12-10

*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
         int m = A.size();
        int n = A[0].size();
        vector<vector<int>> result(n, vector<int>(m));
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                result[j][i] = A[i][j];
            }
        }
        return result;
    }
};
