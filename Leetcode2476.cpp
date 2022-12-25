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
    vector<int> record;
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        dfs(root);
        for(int x : record) cout << x << endl;
        vector<vector<int>> result;
        for(auto& x : queries) {
            vector<int> temp = {-1, -1};
            //_bound 返回第一个大于x的iterator，record.end()是指向数组最后一个元素的下一个位置的iterator
            auto mi = upper_bound(record.begin(), record.end(), x);
            if(mi != record.begin()) temp[0] = *--mi;
            //lower_bound 返回第一个大于等于x的iterator，record.end()是指向数组最后一个元素的下一个位置的iterator
            auto ma = lower_bound(record.begin(), record.end(), x);
            if(ma != record.end()) temp[1] = *ma;
            result.push_back(temp);
        }
        return result;
    }

    void dfs(TreeNode* root) {
        if(!root) return;
        dfs(root->left);
        record.push_back(root->val);
        dfs(root->right);
        return;
    }
};

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
    vector<int> record;
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        dfs(root);
        vector<vector<int>> result;
        for(auto& x : queries) {
            vector<int> temp = {-1, -1};
            temp[0] = getMin(x);
            temp[1] = getMax(x);
            result.push_back(temp);
        }
        return result;
    }

    int getMin(int x) {
        int left = 0, right = record.size() - 1;
        while(left < right) {
            int mid = left + right + 1 >> 1;
            if(record[mid] <= x) left = mid;
            else right = mid - 1;
        }
        return record[right] <= x ? record[right] : -1;
    }

    int getMax(int x) {
        int left = 0, right = record.size() - 1;
        while(left < right) {
            int mid = left + right >> 1;
            if(record[mid] >= x) right = mid;
            else left = mid + 1;
        }
        return record[right] >= x ? record[right] : -1;
    }

    void dfs(TreeNode* root) {
        if(!root) return;
        dfs(root->left);
        record.push_back(root->val);
        dfs(root->right);
        return;
    }
};