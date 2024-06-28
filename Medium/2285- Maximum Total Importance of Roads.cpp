/*

Author : Zishan Khan
Problem : Maximum Total Importance of Roads
Difficulty : Medium
Problem Link : https://leetcode.com/problems/maximum-total-importance-of-roads/description/?envType=daily-question&envId=2024-06-28

*/

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long res = 0, cost = 1;
        vector<int> conn(n, 0);
        for (auto road : roads) {
            conn[road[0]]++;
            conn[road[1]]++;
        }
        sort(conn.begin(), conn.end());
        for (auto con : conn) res += con * (cost++);
        return res;
    }
};
