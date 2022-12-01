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
    int result = 0, maxd = 0;

    int findBottomLeftValue(TreeNode* root) {
        dfs(root, 1);
        return result;
    }

    void dfs(TreeNode* root, int d) {
        if(!root) return;
        if(d > maxd) {
            maxd = d;
            result = root->val;
        }
        dfs(root->left, d + 1), dfs(root->right, d + 1);
    }
};