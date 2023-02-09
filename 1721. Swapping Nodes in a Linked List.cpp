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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *t=head;
        int len=0;
        while(t){
            t=t->next;
            len++;
        }
        len=len+1-k;
        if(len==k)return head;
        t=head;
        int c=1;
        ListNode *fs=NULL;
        ListNode *se=NULL;
        while(t){
            if(c==k)fs=t;
            if(c==len)se=t;
            t=t->next;
            c++;
        }
        swap(fs-> val,se -> val);
        return head;
    }
};