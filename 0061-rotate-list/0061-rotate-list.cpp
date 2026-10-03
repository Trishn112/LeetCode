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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        k=k%n;
        if(k==0){
            return head;
        }
        ListNode* tailnew=head;
        for(int i=0;i<n-k-1;i++){
            tailnew=tailnew->next;
        }
        ListNode* newhead=tailnew->next;
        ListNode* tail=newhead;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=head;

        tailnew->next=NULL;
        return newhead;
        
    }
};