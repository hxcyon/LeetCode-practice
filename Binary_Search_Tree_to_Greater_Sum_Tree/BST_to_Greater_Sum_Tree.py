# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    temp = 0;
    def bstToGst(self, root: TreeNode) -> TreeNode:
        if root.right != None:
            self.bstToGst(root.right)
        self.temp += root.val
        root.val = self.temp
        if root.left != None:
            self.bstToGst(root.left)
        return root
        
