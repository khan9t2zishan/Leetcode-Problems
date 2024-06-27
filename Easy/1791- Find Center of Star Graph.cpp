/*

Author : Zishan Khan
Problem : Find Center of Star Graph
Difficulty : Easy
Problem Link : https://leetcode.com/problems/find-center-of-star-graph/description/?envType=daily-question&envId=2024-06-27

*/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0]==edges[1][0] || edges[0][0]==edges[1][1]){
            return edges[0][0];
        }
        return edges[0][1];
    }
};
