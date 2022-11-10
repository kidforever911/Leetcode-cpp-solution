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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        int t = 0;
        ListNode* dummy = new ListNode(-1);
        while(l1 || l2 || t) {
            if(l1) t += l1->val, l1 = l1->next;
            if(l2) t += l2->val, l2 = l2->next;
            ListNode* cur = new ListNode(t % 10);
            t /= 10;
            cur->next = dummy->next;
            dummy->next = cur;
        }
        return dummy->next;
    }
    
    ListNode* reverse(ListNode* l) {
        ListNode* pre = NULL;
        while(l) {
            ListNode* next = l->next;
            l->next = pre;
            pre = l;
            l = next;
        }
        return pre;
    }
};