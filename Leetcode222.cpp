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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int left = 0, right = 0;
        TreeNode* leftRoot = root;
        TreeNode* rightRoot = root;
        while(leftRoot) {
            leftRoot = leftRoot->left;
            left ++;
        }
        while(rightRoot) {
            rightRoot = rightRoot->right;
            right ++;
        }
        if(left == right) return (1 << left) - 1;
        return countNodes(root->left) + 1 + countNodes(root->right);
    }
};