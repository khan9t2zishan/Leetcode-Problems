/*

Author : Zishan Khan
Problem : Build an Array With Stack Operations
Difficulty : Medium
Problem Link : https://leetcode.com/problems/build-an-array-with-stack-operations/description/?envType=daily-question&envId=2023-11-03

*/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
         int stream = 1;
        
        vector<string> result;
        
        int i = 0;
        while(i < target.size() && stream <= n) {
            result.push_back("Push");
            
            if(stream == target[i]) {
                i++;
            } else {
                result.push_back("Pop");
            }
            stream++;
        }
        
        return result;
    }
};
