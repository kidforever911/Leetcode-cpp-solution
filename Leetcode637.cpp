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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if(!root) return result;
        queue<TreeNode*> record;
        record.push(root);
        while(record.size()) {
            int length = record.size();
            double sum = 0.0;
            for(int i = 0; i < length; i ++) {
                TreeNode* cur = record.front();
                record.pop();
                sum += cur->val;
                if(cur->left) record.push(cur->left);
                if(cur->right) record.push(cur->right);
            }
            result.push_back(sum / length);
        }
        return result;
    }
};