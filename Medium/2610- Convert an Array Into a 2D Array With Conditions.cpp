/*

Author : Zishan Khan
Problem : Convert an Array Into a 2D Array With Conditions
Difficulty : Medium
Problem Link : https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/?envType=daily-question&envId=2024-01-02

*/

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> mp;
        for(auto i: nums){
            mp[i]++;
        }  

        while(!mp.empty()){
            vector<int> temp;
            for(auto it = mp.begin(); it != mp.end(); ){
                temp.push_back(it->first);
                it->second--;
                if(it->second == 0){
                    it = mp.erase(it);
                } else {
                    ++it;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
