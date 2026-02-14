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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        ListNode* pre = NULL;
        ListNode* cur = slow -> next;
        slow -> next = NULL;
        while(cur){
            ListNode* nex = cur -> next;
            cur -> next = pre;
            pre = cur;
            cur = nex;
        }
        ListNode* first = head;
        ListNode* sec = pre;
        while(first && sec){
            ListNode* tmp1 = first -> next;
            ListNode* tmp2 = sec -> next;
            first -> next = sec;
            sec -> next = tmp1;
            first = tmp1; //回斷尾的點
            sec = tmp2;
        }
    }
};