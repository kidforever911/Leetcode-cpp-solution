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
    string result;

    string tree2str(TreeNode* root) {
        dfs(root);
        return result;
    }

    void dfs(TreeNode* root) {
        if(!root) return;
        result += to_string(root->val);
        if(root->left || root->right) {
            result += '(';
            dfs(root->left);
            result += ')';
        }
        if(root->right) {
            result += '(';
            dfs(root->right);
            result += ')';
        }
        return;
    }
};