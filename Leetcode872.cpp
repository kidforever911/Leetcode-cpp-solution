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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> record1, record2;
        dfs(root1, record1);
        dfs(root2, record2);
        return record1 == record2;
    }

    void dfs(TreeNode* root, vector<int>& record) {
        if(!root) return;
        if(!root->left && !root->right) record.push_back(root->val);
        dfs(root->left, record);
        dfs(root->right, record);
    }
};