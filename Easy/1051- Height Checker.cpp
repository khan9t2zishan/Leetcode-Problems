/*

Author : Zishan Khan
Problem : Height Checker
Difficulty : Easy
Problem Link : https://leetcode.com/problems/height-checker/submissions/1283942717/?envType=daily-question&envId=2024-06-10

*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v(heights);
        sort(v.begin(),v.end());
        int count = 0;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != v[i])
             count++;
        }
        return count;
    }
};
