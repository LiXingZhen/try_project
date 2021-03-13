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
   void inorder(TreeNode* root,vector<int>& nums)
    {
        if(root==nullptr)return;
        inorder(root->left,nums);
        nums.push_back(root->val);
        inorder(root->right,nums);
    };
    vector<int> inorderTraversal(TreeNode* root) {
    // 暴力求解?
    // if(root == nullptr)return {};


    // 递归？
 
    vector<int> result;
    inorder(root,result);
    return result;
    }
};
