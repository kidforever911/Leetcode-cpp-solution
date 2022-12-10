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
typedef long long LL;

class Solution {
public:
    const int MOD = 1e9 + 7;
    LL total = 0, ans = 0;

    int maxProduct(TreeNode* root) {
        total = dfs(root);
        dfs(root);
        return ans % MOD;
    }

    int dfs(TreeNode* root) {
        if(!root) return 0;
        int sum = root->val;
        sum += dfs(root->left) + dfs(root->right);
        ans = max(ans, sum * (total - sum));
        return sum;
    }
};