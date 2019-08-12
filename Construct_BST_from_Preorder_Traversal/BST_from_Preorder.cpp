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
    TreeNode* bstRecursion(TreeNode* node, int val){
        
        if(node == NULL)
            return new TreeNode(val);
        else{
            if(node->val > val)
                node->left = bstRecursion(node->left, val);
            else
                node->right = bstRecursion(node->right, val);
        }
        return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i; 
        TreeNode* node = new TreeNode(preorder.at(0));
        for(i = 1; i < preorder.size(); i++){
            node = bstRecursion(node, preorder.at(i));
        }
        return node;
    }
};
