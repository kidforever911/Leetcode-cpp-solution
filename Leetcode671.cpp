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
    long long d1, d2;

    int findSecondMinimumValue(TreeNode* root) {
        d1 = d2 = 1e18;
        dfs(root);
        if(d2 == 1e18) return -1;
        return d2;
    }

    void dfs(TreeNode* root) {
        if(!root) return;
        int x = root->val;
        if(x < d1) d2 = d1, d1 = x;
        else if(x > d1 && x < d2) d2 = x;
        dfs(root->left), dfs(root->right);
        return;
    }
};