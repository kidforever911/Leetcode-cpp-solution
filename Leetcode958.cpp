/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int n = 0, p = 0;

    bool dfs(TreeNode* root, int k) {
        if(!root) return true;
        if(k > 100) return false;
        n ++, p = max(k, p);
        return dfs(root->left, 2 * k) && dfs(root->right, 2 * k + 1);
    }

    bool isCompleteTree(TreeNode* root) {
        if(!dfs(root, 1)) return false;
        return n == p;
    }
};