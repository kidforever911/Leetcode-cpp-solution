class Solution {
public:
    const int P = 131, Q = 159, MOD = 1e7 + 7;
    int T = -1;
    bool ans = false;

    int dfs(TreeNode* root) {
        if (!root) return 12345;
        int left = dfs(root->left), right = dfs(root->right);
        int x = (root->val % MOD + MOD) % MOD;
        if (left == T || right == T) ans = true;
        return (x + left * P % MOD + right * Q) % MOD;
    }

    bool isSubtree(TreeNode* s, TreeNode* t) {
        T = dfs(t);
        if (T == dfs(s)) ans = true;
        return ans;
    }
};
