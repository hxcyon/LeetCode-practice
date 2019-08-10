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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* value = new TreeNode(val);
        TreeNode* node = root;
        if(!root)
            return value;
        if(val < node->val)
            node->left = insertIntoBST(root->left, val);
        else 
            node->right = insertIntoBST(root->right, val);
        return root;
    }
};
