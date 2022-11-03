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
    ListNode* deleteDuplication(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* cur = dummy;
        while(cur->next != NULL) {
            ListNode* temp = cur->next;
            while(temp->next != NULL && cur->next->val == temp->next->val) {
                temp = temp->next;
            }
            if(cur->next == temp) cur = temp;
            else cur->next = temp->next;
        }
        return dummy->next;
    }
};