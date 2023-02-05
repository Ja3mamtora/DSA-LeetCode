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
        ListNode *Fast=head;
        ListNode *Slow=head;
        bool Flag=false;
        while(Fast && Fast->next){
            Fast=Fast->next->next;
            Slow=Slow->next;
            if(Fast==Slow){
                Flag=true;
                break;
            }
        }
        if(!Flag)
        return NULL;
        Fast=head;
        while(Fast!=Slow){
            Fast=Fast->next;
            Slow=Slow->next;
        }
        return Fast;
    }
};