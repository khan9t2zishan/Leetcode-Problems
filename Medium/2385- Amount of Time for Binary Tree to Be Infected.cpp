/*

Author : Zishan Khan
Problem : Amount of Time for Binary Tree to Be Infected
Difficulty : Medium
Problem Link : https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/description/?envType=daily-question&envId=2024-01-10

*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *startEdge=NULL;
    int totalNodes=0;
    void dfs(TreeNode *root,unordered_map<int,TreeNode*> &backEdge,int start){
        if(!root)return ;
        if(root->left)backEdge[root->left->val]=root;
        if(root->right)backEdge[root->right->val]=root;
        if(root->val==start) startEdge=root;
        dfs(root->left,backEdge,start);
        dfs(root->right,backEdge,start);
        totalNodes++;
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,TreeNode *> backEdge;
        queue<TreeNode*> q;
        totalNodes=0;
        dfs(root,backEdge,start);
        unordered_set<int> vis;
        q.push(startEdge);
        int ans=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                TreeNode *currEdge=q.front();
                q.pop();
                if(vis.count(currEdge->val))continue;
                vis.insert(currEdge->val);
                if(vis.size()==totalNodes) return ans;
                if(backEdge.count(currEdge->val))q.push(backEdge[currEdge->val]);
                if(currEdge->left)q.push(currEdge->left);
                if(currEdge->right)q.push(currEdge->right);
            }
            ans++;
        }
        return 0;
    }
};
