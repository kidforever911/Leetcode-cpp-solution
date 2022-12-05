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
    ListNode* middleNode(ListNode* head) {
        if(!head) return head;
        int n = 0;
        ListNode* cur = head;
        while(cur) {
            n ++;
            cur = cur->next;
        }
        n = n / 2;
        while(n --) {
            head = head->next;
        }
        return head;
    }
};