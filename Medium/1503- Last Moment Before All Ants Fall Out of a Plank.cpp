/*

Author : Zishan Khan
Problem : Last Moment Before All Ants Fall Out of a Plank
Difficulty : Medium
Problem Link : https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/description/?envType=daily-question&envId=2023-11-04

*/
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
         int ans = 0;
        int l1 = left.size() ,  l2 = right.size();
        for(int i=0;i<l1;i++){
            ans = max(ans , left[i]);
        }
        for(int i=0;i<l2;i++){
            ans = max(ans , n-right[i]);
        }
        return ans; 
    }
};
