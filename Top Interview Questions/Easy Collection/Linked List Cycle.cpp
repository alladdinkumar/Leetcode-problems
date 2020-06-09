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
        if(head==NULL)
            return false;
        ListNode* sptr=head,*fptr=head;
        while(fptr!=NULL && fptr->next!=NULL)
        {
            sptr=sptr->next;
            fptr=fptr->next->next;
            if(fptr==sptr)
                return true;            
        }
       return false;
    }
};
