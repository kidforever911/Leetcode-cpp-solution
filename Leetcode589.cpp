/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> result;

    vector<int> preorder(Node* root) {
        dfs(root);
        return result;
    }

    void dfs(Node* root) {
        if(!root) return;
        result.push_back(root->val);
        for(auto& c : root->children) {
            dfs(c);
        }
    }
};