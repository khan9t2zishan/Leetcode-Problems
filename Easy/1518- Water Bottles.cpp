/*

Author : Zishan Khan
Problem : Water Bottles
Difficulty : Easy
Problem Link : https://leetcode.com/problems/water-bottles/description/?envType=daily-question&envId=2024-07-07

*/

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalBottles = numBottles;

        while (numBottles >= numExchange) {
            totalBottles += numBottles / numExchange;
            numBottles = (numBottles / numExchange) + (numBottles % numExchange);
        }

        return totalBottles;
    }
};
