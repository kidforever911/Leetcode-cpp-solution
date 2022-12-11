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
    int result = INT_MIN;

    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        dfs(root);
        return result;
    }

    int dfs(TreeNode* root) {
        if(!root) return 0;
        int left = max(0, dfs(root->left));
        int right = max(0, dfs(root->right));
        result = max(result, root->val + left + right);
        return root->val + max(left, right);
    }
};