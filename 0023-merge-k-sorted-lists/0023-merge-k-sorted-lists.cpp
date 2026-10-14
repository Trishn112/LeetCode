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
        vector<int>sorted;
        for(int i=0;i<lists.size();i++){
            ListNode *temp=lists[i];
            while(temp!=nullptr){
                sorted.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(sorted.begin(),sorted.end());
        ListNode dummy;
        ListNode *tail=&dummy;
        for(int x:sorted){
            tail->next=new ListNode(x);
            tail=tail->next;
        }
        return dummy.next;
    }
};