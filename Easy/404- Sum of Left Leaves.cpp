/*

Author : Zishan Khan
Problem : Sum of Left Leaves
Difficulty : Easy
Problem Link : https://leetcode.com/problems/sum-of-left-leaves/solutions/?envType=daily-question&envId=2024-04-14

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
    int ans = 0;
    int sumOfLeftLeaves(TreeNode* root)
    {
        if(root != NULL)
        {
            if(root->left != NULL && root->left->left == NULL && root->left->right == NULL)
            {
                ans += root->left->val;
            }
            sumOfLeftLeaves(root->left);
            sumOfLeftLeaves(root->right);
        }
        return ans;
    }
};
