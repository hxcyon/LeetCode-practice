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
        int i = 0;
        TreeNode* node = root;
        TreeNode *value = new TreeNode(val);
        if(!root)
            return value;
        
        while(node){
            if(val < node->val){
                if(node->left)
                    node = node->left;
                else{
                    node->left = value;
                    break;
                }
            }
            else{
                if(node->right)
                    node = node->right;
                else{
                    node->right = value;
                    break;
                }
            }
        }
        return root;
    }
};
