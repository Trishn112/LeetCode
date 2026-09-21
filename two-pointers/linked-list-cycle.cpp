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
    bool hasCycle(ListNode *head) {
        ListNode* sl=head;
        ListNode* fst=head;
        while(fst!=NULL&&fst->next!=NULL){
            sl=sl->next;
            fst=fst->next->next;
            if(sl==fst){
                return true;
            }
        }
        return false;
    }
};