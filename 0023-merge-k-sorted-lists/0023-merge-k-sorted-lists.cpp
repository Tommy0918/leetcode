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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        return paritylists(lists, 0, lists.size() - 1);
    }
    ListNode* paritylists(vector<ListNode*>& lists, int start, int end){
        if(start == end) return lists[start];
        if(end > start){
            int mid = start + (end - start) / 2;
            ListNode* l1 = paritylists(lists, start, mid);
            ListNode* l2 = paritylists(lists, mid + 1, end);
            return mergelists(l1, l2);
        }
        return nullptr;
    }
    ListNode* mergelists(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
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
        cur->next = l1 ? l1 : l2;
        ListNode* res = dummy -> next;
        delete dummy;
        return res;
    }
};