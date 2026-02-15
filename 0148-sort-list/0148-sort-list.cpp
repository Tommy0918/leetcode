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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL)    return head;
        ListNode* fast = head -> next;
        ListNode* slow = head;
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        ListNode* mid = slow -> next;
        slow -> next = NULL;
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        return Merge(left, right);
    }

private:
    ListNode* Merge(ListNode* l1, ListNode* l2){
        ListNode dummy(0);
        ListNode* cur = &dummy;
        while(l1 && l2){
            if(l1 -> val < l2 -> val){
                cur -> next = l1;
                l1 = l1 -> next;
            }
            else{
                cur -> next = l2;
                l2 = l2 -> next;
            }
            cur = cur -> next;
        }
        cur -> next = l1 ? l1 : l2;
        return dummy.next;
    }
};