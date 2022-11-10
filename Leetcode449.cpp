/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string result;
        dfs_s(root, result);
        return result;
    }
    
    void dfs_s(TreeNode* root, string& result) {
        if(!root) return;
        result += to_string(root->val) + ' ';
        dfs_s(root->left, result), dfs_s(root->right, result);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<int> nums;
        stringstream ssin(data);
        int x, u = 0;
        while(ssin >> x) nums.push_back(x);
        return dfs_d(nums, u, INT_MIN, INT_MAX);
    }
    
    TreeNode* dfs_d(vector<int>& nums, int& u, int min, int max) {
        if(u == nums.size() || nums[u] < min || nums[u] > max) return NULL;
        TreeNode* root = new TreeNode(nums[u ++]);
        root->left = dfs_d(nums, u, min, root->val);
        root->right = dfs_d(nums, u, root->val + 1, max);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;