/*

Author : Zishan Khan
Problem : Minimum Time to Make Rope Colorful
Difficulty : Medium
Problem Link : https://leetcode.com/problems/minimum-time-to-make-rope-colorful/description/?envType=daily-question&envId=2023-12-27

*/

class Solution {
public:
    struct node{
        char c;
        int val;
    };
    
    int minCost(string s, vector<int>& cost) {
        stack<node> stack;
        int n=s.size(), result=0;
        
        for(int i=0; i<n; i++){
            if(!stack.empty() && stack.top().c==s[i]){
                if(stack.top().val<cost[i]){
                    result+=stack.top().val;
                    stack.pop();
                    stack.push({s[i], cost[i]});
                }
                else{
                    result+=cost[i];
                }
            }
            else{
                stack.push({s[i], cost[i]});
            }
        }
        
        return result;
    }
};
