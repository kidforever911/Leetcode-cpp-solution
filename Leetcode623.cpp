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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(!root) return root;
        if(depth == 1) {
            TreeNode* cur = new TreeNode(val);
            cur->left = root;
            return cur;
        }

        queue<TreeNode*> q;
        q.push(root);
        for(int i = 0; i < depth - 2; i ++) {
            int length = q.size();
            for(int i = 0; i < length; i ++) {
                auto cur = q.front();
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
        }

        while(q.size()) {
            auto cur = q.front();
            q.pop();
            auto left = new TreeNode(val), right = new TreeNode(val);
            left->left = cur->left, right->right = cur->right;
            cur->left = left, cur->right = right;
        }
        return root;
    }
};