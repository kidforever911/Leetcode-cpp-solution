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
private:
    int ans;
    
    vector<int> calc(TreeNode* root) {
        vector<int> l(2, 0), r(2, 0);
        
        if(root->left) l = calc(root->left);
        if(root->right) r = calc(root->right);
        
        int s = l[0] + r[0] + root->val;
        int c = l[1] + r[1] + 1;
        if(s / c == root->val) {
            ans ++;
        }
        return {s, c};
    }
    
public:
    int averageOfSubtree(TreeNode* root) {
        ans = 0;
        calc(root);
        return ans;
    }
};