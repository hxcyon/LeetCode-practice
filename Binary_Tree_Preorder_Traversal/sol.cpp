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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        if(!root) return arr;
        
        stack<TreeNode*> s;
        s.push(root);
        TreeNode* elem = root;
        
        while(!s.empty()){
            elem = s.top();
            s.pop();
            arr.push_back(elem->val);
            if(elem->right){
                s.push(elem->right);
            }
            if(elem->left){
                s.push(elem->left);
            }
        }
        return arr;
    }
};
