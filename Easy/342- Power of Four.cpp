/*

Author : Zishan Khan
Problem : Power of Four
Difficulty : Easy
Problem Link : https://leetcode.com/problems/power-of-four/description/?envType=daily-question&envId=2023-10-23

*/

class Solution {
public:
    bool isPowerOfFour(int n) {
          if(n==0){
            return false;
        }
        while(n%4 == 0){
            n /= 4;
        }
        return n==1;   
    }
};

