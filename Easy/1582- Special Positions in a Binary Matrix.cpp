/*

Author : Zishan Khan
Problem : Special Positions in a Binary Matrix
Difficulty : Easy
Problem Link : https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/?envType=daily-question&envId=2023-12-13

*/

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rows(mat.size()), cols(mat[0].size());
    for (int i = 0; i < rows.size(); ++i)
        for (int j = 0; j < cols.size(); ++j) {
            if (mat[i][j])
                ++rows[i], ++cols[j];
        }
    int res = 0;
    for (int i = 0; i < rows.size(); ++i)
        for (int j = 0; j < cols.size(); ++j)
            if (mat[i][j] && rows[i] == 1 && cols[j] == 1)
                ++res;
    return res;
    }
};
