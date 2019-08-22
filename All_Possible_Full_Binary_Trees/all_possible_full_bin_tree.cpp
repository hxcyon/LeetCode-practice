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
    vector<TreeNode*> allPossibleFBT(int N) {
        int i, j, k;
        vector<TreeNode*> res;
        vector<TreeNode*> n1, n2;
        
        if(N < 1 || N % 2 == 0)
            return res;
        
        for(i = 2; i < N; i+= 2){
            n1 = allPossibleFBT(i - 1);
            n2 = allPossibleFBT(N - i);
            
            int n1_s = n1.size();
            int n2_s = n2.size();
            
            for(j = 0; j < n1_s; j++){
                for(k = 0; k < n2_s; k++){
                    TreeNode* val = new TreeNode(0);
                    val->left = n1[j];
                    val->right = n2[k];
                    res.push_back(val);
                }    
            }
        }
        if(res.empty())
                res.push_back(new TreeNode(0));
        return res;
        
    }
};
