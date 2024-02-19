/*

Author : Zishan Khan
Problem : Power of Two
Difficulty : Easy
Problem Link : https://leetcode.com/problems/power-of-two/solutions/4753088/231-power-of-two-c-solution/

*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        while(n%2==0) n/=2;
        return n==1;
    }
};
