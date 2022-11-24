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
    int maxc = 0, curc = 0, last;

    vector<int> findMode(TreeNode* root) {
        dfs(root);
        return result;
    }

    void dfs(TreeNode* root) {
        if(!root) return;
        dfs(root->left);
        if(!curc || root->val == last) {
            curc ++;
            last = root->val;
        }
        else {
            last = root->val;
            curc = 1;
        }
        if(curc > maxc) result = {last}, maxc = curc;
        else if(curc == maxc) result.push_back(last);
        dfs(root->right);
    }
};