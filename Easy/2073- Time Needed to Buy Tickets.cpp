/*

Author : Zishan Khan
Problem : Time Needed to Buy Tickets
Difficulty : Easy
Problem Link : https://leetcode.com/problems/time-needed-to-buy-tickets/description/?envType=daily-question&envId=2024-04-09

*/

class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
        int n=v.size();
        int t=0;
        while(true) {
            for(int i=0;i<n;i++) {
                if(v[i]>0) {
                    v[i]=v[i]-1;
                    t++;
                }
                if(i==k && v[i]==0)
                    return t;
            }
        }
        return 0;
    }
};
