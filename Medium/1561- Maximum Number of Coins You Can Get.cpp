/*

Author : Zishan Khan
Problem : Maximum Number of Coins You Can Get
Difficulty : Medium
Problem Link : https://leetcode.com/problems/maximum-number-of-coins-you-can-get/description/?envType=daily-question&envId=2023-11-24

*/

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        
        sort(begin(piles), end(piles));
        
        int result = 0;
        
        int Bob = 0, Me = n-2, Alice = n-1;
        
        while(Me > Bob) {
            
            result += piles[Me];
        
            Me    -= 2;    
            Bob   += 1;
            Alice -= 2; //(You can remove this becasue it's required. I Used it for the sake of completeness)
        }
        
        return result; 
    }
};
