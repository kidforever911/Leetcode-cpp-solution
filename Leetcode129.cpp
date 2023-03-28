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
    int result = 0;

    int sumNumbers(TreeNode* root) {
        dfs(root, 0);
        return result;
    }

    void dfs(TreeNode* root, int sum) {
        if(!root) return;
        sum = sum * 10 + root->val;
        if(root->left) dfs(root->left, sum);
        if(root->right) dfs(root->right, sum);
        if(!root->left && !root->right) result += sum;
        return;
    }
};