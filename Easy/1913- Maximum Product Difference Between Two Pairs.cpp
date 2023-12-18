/*

Author : Zishan Khan
Problem : Maximum Product Difference Between Two Pairs
Difficulty : Easy
Problem Link : https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/?envType=daily-question&envId=2023-12-18

*/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest = 0, secondLargest = 0;
        int smallest = INT_MAX, secondSmallest = INT_MAX;

        for (int n : nums) {
            if (n < smallest) {
                secondSmallest = smallest;
                smallest = n;
            } else if (n < secondSmallest) {
                secondSmallest = n;
            }

            if (n > largest) {
                secondLargest = largest;
                largest = n;
            } else if (n > secondLargest) {
                secondLargest = n;
            }
        }

        return (largest * secondLargest) - (smallest * secondSmallest);
    }
};
