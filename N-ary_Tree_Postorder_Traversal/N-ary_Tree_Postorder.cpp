/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> arr;
    void find_val(Node* root){
        int i; 
        if(!root) return;
        for(i = 0; i < root->children.size(); i++){
            find_val(root->children[i]);
        }
        arr.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        find_val(root);
        return arr;
    }
};
