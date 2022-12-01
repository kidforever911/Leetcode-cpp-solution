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
    unordered_map<int, int> record;
    vector<int> result;
    int maxc = 0;

    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        return result;
    }

    int dfs(TreeNode* root) {
        if(!root) return 0;
        int sum = root->val + dfs(root->left) + dfs(root->right);
        record[sum] ++;
        if(record[sum] > maxc) {
            maxc = record[sum];
            result = {sum};
        } else if(record[sum] == maxc) {
            result.push_back(sum);
        }
        return sum;
    }
};