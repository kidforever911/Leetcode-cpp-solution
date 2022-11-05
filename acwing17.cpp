/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> printListReversingly(ListNode* head) {
        vector<int> result;
        while(head) {
            result.push_back(head->val);
            head = head->next;
        }
        return vector<int>(result.rbegin(), result.rend());
    }
};

class Solution {
public:
    vector<int> printListReversingly(ListNode* head) {
        ListNode* prev = NULL;
        while(head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        vector<int> result;
        while(prev) {
            result.push_back(prev->val);
            prev = prev->next;
        }
        return result;
    }
};

class Solution {
public:
    vector<int> printListReversingly(ListNode* head) {
        stack<int> record;
        while(head) {
            record.push(head->val);
            head = head->next;
        }
        vector<int> result;
        while(!record.empty()) {
            result.push_back(record.top());
            record.pop();
        }
        return result;
    }
};