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
    typedef long long LL;
    unordered_map<LL, int> record;
    int result = 0;
    
    int pathSum(TreeNode* root, int targetSum) {
        record[0] ++;
        dfs(root, targetSum, 0);
        return result;
    }
    
    void dfs(TreeNode* root, int sum, LL cur) {
        if(!root) return;
        cur += root->val;
        
        result += record[cur - sum];
        record[cur] ++;
        dfs(root->left, sum, cur), dfs(root->right, sum, cur);
        record[cur] --;
        return;
    }
};

class Solution {
public:
    typedef long long LL;
    int result;
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        dfs(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        return result;
    }
    
    void dfs(TreeNode* root, LL sum) {
        if(!root) return;
        if(sum == root->val) result += 1;
        dfs(root->left, sum - root->val);
        dfs(root->right, sum - root->val);
        return;
    }
};