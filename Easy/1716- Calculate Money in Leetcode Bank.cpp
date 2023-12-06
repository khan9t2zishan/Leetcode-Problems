/*

Author : Zishan Khan
Problem : Calculate Money in Leetcode Bank
Difficulty : Easy
Problem Link : https://leetcode.com/problems/calculate-money-in-leetcode-bank/submissions/1113596588/?envType=daily-question&envId=2023-12-06

*/

class Solution {
public:
    int totalMoney(int n) {
        
       int m=n/7;

       int res=0;

       for(int i=1;i<=m;i++)
    {
        res += 7*(i+3);
    }

    for(int i=7*m;i<n;i++)
    {
        res+=++m;
    }
    return res;
    }
};
