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
    int ans = 0;
    int distCoins(TreeNode* root, int res){
        if(!root)
            return 0;
                
        int left = distCoins(root->left, res);
        int right = distCoins(root->right, res);
        
        res = left + right + root->val - 1;
        ans += abs(left) + abs(right); 
        
        return res;
    }
    
    int distributeCoins(TreeNode* root) {
        int res = 0;
        distCoins(root, res);
        return ans;
    }
};
