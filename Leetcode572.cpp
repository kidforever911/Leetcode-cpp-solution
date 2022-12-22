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
    const int P = 131, Q = 159, MOD = 1e7 + 7;
    int T = -1;
    bool ans = false;

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        T = dfs(subRoot);
        if(T == dfs(root)) ans = true;
        return ans;
    }

    int dfs(TreeNode* root) {
        if(!root) return 12345;
        int left = dfs(root->left), right = dfs(root->right);
        int x = (root->val % MOD + MOD) % MOD;
        if(T == left || T == right) ans = true;
        return (x + left * P % MOD + right * Q % MOD) % MOD;
    }
};