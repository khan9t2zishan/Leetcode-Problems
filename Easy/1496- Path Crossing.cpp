/*

Author : Zishan Khan
Problem : Path Crossing
Difficulty : Easy
Problem Link : https://leetcode.com/problems/path-crossing/?envType=daily-question&envId=2023-12-23

*/

class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> points;
        points.insert("0,0");
        int x = 0, y = 0;

        for (char d : path) {
            if (d == 'N') y++;
            else if (d == 'S') y--;
            else if (d == 'E') x++;
            else if (d == 'W') x--;

            if (points.count(to_string(x) + "," + to_string(y))) return true;
            points.insert(to_string(x) + "," + to_string(y));
        }

        return false;        
    }
};
