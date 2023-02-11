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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL)return head;
        ListNode *p=head;
        ListNode *q=NULL;
        while(p and p->next){
            if(p->val==p->next->val){
                while(p->next and p->val==p->next->val)
                p=p->next;
                if(!q)
                head=p->next;
                else{
                    q->next=p->next;
                }
                p=p->next;
            }
            else{
                q=p;
                p=p->next;
            }
        }
        return head;
    }
};