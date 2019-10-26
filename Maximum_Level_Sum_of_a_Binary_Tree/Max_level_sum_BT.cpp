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
    int maxLevelSum(TreeNode* root) {
        int level = 0;
        int max = 0;
        int cur = 1;
        int count = 0;
        int total = 0;
        int maxLevel = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            total += temp->val;
            cur--;
            if(temp->left){
                q.push(temp->left);
                count++;
            }
            if(temp->right){
                q.push(temp->right);
                count++;
            }
            if(cur == 0){
                level+= 1;
                cur = count; 
                count = 0;
                if(max < total){
                    max = total;
                    maxLevel = level;
                }
                total = 0;
            }
        }
        return maxLevel;
    }
};
