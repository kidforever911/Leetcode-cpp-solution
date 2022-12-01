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
    vector<int> result;
    unordered_map<int, int> record;
    int maxd = 0;

    vector<int> largestValues(TreeNode* root) {
        dfs(root, 1);
        for(int i = 1; i <= maxd; i ++) {
            result.push_back(record[i]);
        }
        return result;
    }

    void dfs(TreeNode* root, int d) {
        if(!root) return;
        maxd = max(d, maxd);
        if(!record.count(d)) record[d] = root->val;
        else record[d] = max(record[d], root->val);
        dfs(root->left, d + 1);
        dfs(root->right, d + 1);
        return;
    }
};

