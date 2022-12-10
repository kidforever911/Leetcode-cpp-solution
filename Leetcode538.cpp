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
    int sum = 0;

    TreeNode* convertBST(TreeNode* root) {
        if(!root) return root;
        dfs(root);
        return root;
    }

    void dfs(TreeNode* root) {
        if(!root) return;
        dfs(root->right);
        sum += root->val;
        root->val = sum;
        dfs(root->left);
    }
};