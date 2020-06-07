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
    
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *ptr1=head;
        ListNode *ptr2=head->next;
        if(ptr2->next==NULL)
        {
            ptr2->next=ptr1;
            ptr1->next=NULL;
            return ptr2;
        }
        ptr1->next=NULL;
        ListNode *ptr3=ptr2->next;
        while(ptr3->next!=NULL)
        {
            ptr2->next=ptr1;
            ptr1=ptr2;
            ptr2=ptr3;
            ptr3=ptr3->next;
        }
        ptr2->next=ptr1;
        ptr3->next=ptr2;
        return ptr3;      
    }
};
