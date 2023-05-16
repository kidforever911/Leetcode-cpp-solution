/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> record;
        for(auto p = head; p; p = p->next) record.push_back(p->val);
        swap(record[k - 1], record[record.size() - k]);
        head = new ListNode(record[0]);
        auto cur = head;
        for(int i = 1; i < record.size(); i ++) {
            cur = cur->next = new ListNode(record[i]);
        }
        return head;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        auto p = head;
        while(-- k) p = p->next;
        auto pc = p, q = head;
        while(pc->next) {
            q = q->next;
            pc = pc->next;
        }
        swap(p->val, q->val);
        return head;
    }
};