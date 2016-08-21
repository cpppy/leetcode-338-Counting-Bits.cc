/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)  return res;
        inorder(root,res);
        return res;
        
    }
    void inorder(TreeNode* root,vector<int> &res){
        if(root==NULL)  return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
};
