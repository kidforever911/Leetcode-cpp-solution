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
    int widthOfBinaryTree(TreeNode* root) {
        typedef long long LL;
        if(!root) return 0;
        queue<pair<TreeNode*, LL>> q;
        q.push({root, 1});
        int result = 1;
        while(q.size()) {
            int length = q.size();
            LL l = q.front().second, r;
            for(int i = 0; i < length; i ++) {
                auto cur = q.front();
                q.pop();
                auto t = cur.first;
                auto p = cur.second - l + 1;
                r = cur.second;
                if(t->left) q.push({t->left, p * 2});
                if(t->right) q.push({t->right, p * 2 + 1});
            }
            result = max(result, (int)(r - l + 1));
        }
        return result;
    }
};