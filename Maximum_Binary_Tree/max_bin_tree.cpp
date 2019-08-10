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
    TreeNode* MaxBinaryTree(vector<int>& nums, int L, int R) {
        int max = INT_MIN; 
        int index = 0;
        if(L >= R)
            return NULL;
        
        int i;
        for(i = L; i < R; i++){
            if(nums.at(i) > max){
                max = nums.at(i);
                index = i;
            }
        }
        
        TreeNode* node = new TreeNode(max);
        node->left = MaxBinaryTree(nums, L, index);
        node->right = MaxBinaryTree(nums, index + 1, R);
        return node; 
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return MaxBinaryTree(nums, 0, nums.size());        
    
    }
};
