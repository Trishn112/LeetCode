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
    ListNode* partition(ListNode* head, int x) {
        ListNode small(0);
        ListNode big(0);
        ListNode* slow=&small;
        ListNode* fast=&big;
        while(head!=nullptr){
            if(head->val<x){
                slow->next=head;
                slow=slow->next;
            }
            else{
                fast->next=head;
                fast=fast->next;
            }
            head=head->next;
        }
        fast->next=nullptr;
        slow->next=big.next;
            
        return small.next;
        
        
    }
};