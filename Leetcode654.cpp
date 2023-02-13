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
    int n, k;
    vector<vector<int>> f;
    vector<int> nums;

    TreeNode* constructMaximumBinaryTree(vector<int>& _nums) {
        nums = _nums;
        n = nums.size();
        k = log(n) / log(2);
        f = vector<vector<int>>(n, vector<int>(k + 1));
        for(int j = 0; j <= k; j ++) {
            for(int i = 0; i + (1 << j) - 1 < n; i ++) {
                if(!j) f[i][j] = i;
                else {
                    int l = f[i][j - 1], r = f[i + (1 << j - 1)][j - 1];
                    if(nums[l] > nums[r]) f[i][j] = l;
                    else f[i][j] = r;
                }
            }
        }
        return build(0, n - 1);
    }

    int query(int l, int r) {
        int len = r - l + 1;
        int k = log(len) / log(2);
        int a = f[l][k], b = f[r - (1 << k) + 1][k];
        if(nums[a] > nums[b]) return a;
        return b;
    }

    TreeNode* build(int l, int r) {
        if(l > r) return NULL;
        int k = query(l, r);
        auto root = new TreeNode(nums[k]);
        root->left = build(l, k - 1);
        root->right = build(k + 1, r);
        return root;
    }
};