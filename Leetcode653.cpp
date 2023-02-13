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
    unordered_set<int> record;

    bool findTarget(TreeNode* root, int k) {
        return dfs(root, k);
    }

    bool dfs(TreeNode* root, int k) {
        if(!root) return false;
        if(dfs(root->left, k)) return true;
        int x = root->val;
        if(record.count(k - x)) return true;
        record.insert(x);
        return dfs(root->right, k);
    }
};