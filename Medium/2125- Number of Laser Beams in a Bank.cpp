/*

Author : Zishan Khan
Problem : Number of Laser Beams in a Bank
Difficulty : Medium
Problem Link : https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/?envType=daily-question&envId=2024-01-03

*/

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int pre=0,cur=0,res=0;
        for(int i=0;i<bank.size();i++){
            cur=count(bank[i].begin(),bank[i].end(),'1');
            if(cur>0)
                res+=pre*cur,pre=cur;
        }
        return res;
    }
};
