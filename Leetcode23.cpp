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

    struct Cmp {
        bool operator() (ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Cmp> record;
        auto dummy = new ListNode(-1), tail = dummy;
        for(auto l : lists) if(l) record.push(l);

        while(record.size()) {
            auto t = record.top();
            record.pop();
            tail = tail->next = t;
            if(t->next) record.push(t->next);
        }
        return dummy->next;
    }
};