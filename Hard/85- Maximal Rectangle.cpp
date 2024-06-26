/*

Author : Zishan Khan
Problem : Maximal Rectangle
Difficulty : Hard
Problem Link : https://leetcode.com/problems/maximal-rectangle/submissions/1231372561/?envType=daily-question&envId=2024-04-13

*/

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty())
            return 0;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> heights(cols + 1, 0); // Include an extra element for easier calculation
        int maxArea = 0;
        
        for (const auto& row : matrix) {
            for (int i = 0; i < cols; i++) {
                heights[i] = (row[i] == '1') ? heights[i] + 1 : 0;
            }
            
            // Calculate max area using histogram method
            int n = heights.size(); // Number of bars in the histogram
            
            for (int i = 0; i < n; i++) {
                for (int j = i, minHeight = INT_MAX; j < n; j++) {
                    minHeight = min(minHeight, heights[j]);
                    int area = minHeight * (j - i + 1);
                    maxArea = max(maxArea, area);
                }
            }
        }
        
        return maxArea;
    }
};
