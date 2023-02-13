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
    unordered_map<string, int> ids;
    int count = 0;
    unordered_map<int, int> record;
    vector<TreeNode*> result;

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return result;
    }

    int dfs(TreeNode* root) {
        if(!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        string key = to_string(root->val) + ' ' + to_string(left) + ' ' + to_string(right);
        if(ids.count(key) == 0) ids[key] = ++ count;
        int id = ids[key];
        if(++ record[id] == 2) result.push_back(root);
        return id;
    }
};