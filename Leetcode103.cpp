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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> result;
        int depth = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()) {
            vector<int> temp;
            int length = q.size();
            for(int i = 0; i < length; i ++) {
                auto cur = q.front();
                temp.push_back(cur->val);
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            if(depth % 2 == 1) reverse(temp.begin(), temp.end());
            depth ++;
            result.push_back(temp);
        }
        return result;
    }
};