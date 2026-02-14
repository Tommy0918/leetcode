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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL) return NULL;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* pre = dummy;
        for(int i = 0;i < left - 1;i++){
            pre = pre -> next;
        }
        ListNode* cur = pre -> next;
        ListNode* nex = NULL;
        ListNode* rev_pre = NULL;
        ListNode* tail = cur;
        for (int i = 0 ;i < (right - left + 1);i++){
            nex = cur -> next;
            cur -> next = rev_pre;
            rev_pre = cur;
            cur = nex;
        }
    pre -> next = rev_pre;
    tail -> next = cur;
    return dummy->next;
    }
};