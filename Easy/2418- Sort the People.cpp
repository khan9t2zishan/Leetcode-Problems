/*

Author : Zishan Khan
Problem : Sort the People
Difficulty : Easy
Problem Link : https://leetcode.com/problems/sort-the-people/description/?envType=daily-question&envId=2024-07-22

*/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int, string>> A;
        int N = names.size();
        for(int i = 0; i < N; i++) {
            A.push_back({heights[i], names[i]});
        }

        sort(A.rbegin(), A.rend());

        vector<string> ans;
        for(int i = 0; i < N; i++) {
            ans.push_back(A[i].second);
        }
        return ans;  
    }
};
