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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt=0;
        if(headA==NULL || headB==NULL)
            return NULL;
        ListNode* ptr1 =headA;
        ListNode* ptr2= headB;
        while(cnt<=2)
        {
            if(ptr1==ptr2)
                return ptr1;
            if(ptr1->next==NULL)
            {
                ptr1=headB;
                cnt++;
            }
            else
                ptr1=ptr1->next;
            if(ptr2->next==NULL)
            {
                ptr2=headA;
                cnt++;
            }
            else
                ptr2=ptr2->next;
        }
        return NULL;
    }
};
