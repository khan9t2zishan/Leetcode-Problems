/*

Author : Zishan Khan
Problem : Find the Winner of the Circular Game
Difficulty : Medium
Problem Link : https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/?envType=daily-question&envId=2024-07-08

*/

class Solution {
public:
    int findTheWinner(int n, int k) {
        std::vector<int> circle;
        for (int i = 1; i <= n; ++i) {
            circle.push_back(i);
        }
        int cur_ind = 0;

        while (circle.size() > 1) {
            int next_to_remove = (cur_ind + k - 1) % circle.size();
            circle.erase(circle.begin() + next_to_remove);
            cur_ind = next_to_remove;
        }

        return circle[0];
    }
};
