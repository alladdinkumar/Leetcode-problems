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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode  *l3=NULL,*head,*ptr;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val < l2->val)
            {
                if(l3==NULL)
                {
                   head=l1;
                   l3=l1;
                   l1=l1->next;
                }
                else
                {
                   ptr=l1;
                   l1=l1->next;
                   l3->next=ptr;
                   l3=l3->next;
                }
                
            }
            else
            {
                if(l3==NULL)
                {
                   head=l2;
                   l3=l2;
                   l2=l2->next;
                }
                else{
                    ptr=l2;
                    l2=l2->next;
                    l3->next=ptr;
                    l3=l3->next;
                }
                
            }
        }
        if(l1==NULL)
        {
            if(l3==NULL)
                head=l2;
            else
                l3->next=l2;
        }  
        else
        {
             if(l3==NULL)
                head=l1;
            else
                l3->next=l1;
        }
        return head;
    }
};
