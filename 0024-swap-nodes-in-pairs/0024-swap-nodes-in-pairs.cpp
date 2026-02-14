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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        dummy -> next = head;
        while(cur -> next != NULL && cur -> next -> next != NULL){
            ListNode* t1 = cur -> next;
            ListNode* t2 = cur -> next -> next;
            cur -> next = t2;
            t1 -> next = t2 -> next;
            t2 -> next= t1;
            cur = t1;
        } 
        return dummy -> next;
    }
};