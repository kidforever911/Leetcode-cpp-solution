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
    int minimumOperations(TreeNode* root) {
        int result = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()) {
            int len = q.size();
            vector<int> record;
            for(int i = 0; i < len; i ++) {
                TreeNode* cur = q.front();
                q.pop();
                record.push_back(cur->val);
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            result += getMin(record);
        }
        return result;
    }
    
    int getMin(vector<int> &record) {
        int cnt = 0;
        vector<int> arr = record;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, int> map;
        for(int i = 0; i < n; i ++) {
            map[arr[i]] = i;
        }
        for(int i = 0; i < n; i ++) {
            while(arr[i] != record[i]) {
                swap(record[i], record[map[record[i]]]);
                cnt ++;
            }
        }
        return cnt;
    }
};