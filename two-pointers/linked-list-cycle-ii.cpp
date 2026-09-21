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
    ListNode *detectCycle(ListNode *head) {
        ListNode* sl=head;
        ListNode* fst=head;
        bool cycle=false;
        while(fst!=NULL&&fst->next!=NULL){
            sl=sl->next;
            fst=fst->next->next;
            if(sl==fst){
                cycle=true;
                break;
            }
        }
        if(!cycle){
            return NULL;
        }
        sl=head;
        while(sl!=fst){
            sl=sl->next;
            fst=fst->next;
        }
        return sl;

    }
};