/*

Author : Zishan Khan
Problem : Find the Town Judge
Difficulty : Easy
Problem Link : https://leetcode.com/problems/find-the-town-judge/description/?envType=daily-question&envId=2024-02-22

*/

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> Trusted(N + 1, 0);
        for(auto person : trust){
            Trusted[person[0]]--;
            Trusted[person[1]]++;
        }
        for(int i = 1;i <= N;i++){
            if(Trusted[i] == N - 1)
                return i;
        }
        return -1;
    }
};
