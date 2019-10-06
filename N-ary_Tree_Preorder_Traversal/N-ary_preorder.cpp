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
    void preorderfunc(Node* root){
        int i;
        if(root){
            arr.push_back(root->val);         
            for(i = 0; i < root->children.size(); i++){
                preorderfunc(root->children[i]);
            }
        }
        else return;
    }
    vector<int> preorder(Node* root) {
        preorderfunc(root);
        return arr;
    }
};
