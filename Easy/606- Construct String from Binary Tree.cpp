/*

Author : Zishan Khan
Problem : Construct String from Binary Tree
Difficulty : Easy
Problem Link : https://leetcode.com/problems/construct-string-from-binary-tree/description/?envType=daily-question&envId=2023-12-08

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
    string tree2str(TreeNode* root) {
         if(!root) {
            return "";
        }
        
        string result = to_string(root->val);
        string l = tree2str(root->left);
        string r = tree2str(root->right);
       
        if(!root->left && !root->right) {
            return result;
        }
        
        if(!root->right)
            return result + "(" + l + ")";
        
        if(!root->left)
            return result + "()" + "(" + r + ")";
        
        return result + "(" + l + ")" + "(" + r + ")";
    }
};
