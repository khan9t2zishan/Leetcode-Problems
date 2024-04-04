/*

Author : Zishan Khan
Problem : Maximum Nesting Depth of the Parentheses
Difficulty : Easy
Problem Link : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/?envType=daily-question&envId=2024-04-04

*/

class Solution {
public:
    int maxDepth(string s) {
        int maxi=0,curr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                maxi=max(maxi,++curr);
            }else if(s[i]==')'){
                curr--;
            }
        }
        return maxi;
    }
};
