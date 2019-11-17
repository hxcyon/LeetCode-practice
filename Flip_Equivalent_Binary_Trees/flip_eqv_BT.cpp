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
    bool TreeFlipped(TreeNode* root1, TreeNode* root2){
        //TreeNode* flipped = new TreeNode(val);
        if(!root1 && !root2)
            return true;
        
        if(!root1 || !root2 || root1->val != root2->val)
            return false;
        
        else{
            return TreeFlipped(root1->left, root2->right) && TreeFlipped(root1->right, root2->left) || TreeFlipped(root1->left, root2->left) && TreeFlipped(root1->right, root2->right);
        }
    }
    /*
    TreeNode* flipEquiv(TreeNode* root1, TreeNode* root2){
        return TreeFlipped(root1, root1->val); 
    }
    */
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return TreeFlipped(root1, root2);
    }
};
