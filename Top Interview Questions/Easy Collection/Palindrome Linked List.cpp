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
    ListNode* ptr;
    bool check=true;
    void recur(ListNode* head)
    {
        if(head==NULL || check==false)
            return;
        int x=head->val;
        recur(head->next);
        if (ptr->val!=x)
        {
            check= false;
        }   
        else
        {
            ptr=ptr->next;
        }   
    }
    bool isPalindrome(ListNode* head) {
        ptr=head;
        recur(head);
        return check;
    }
};
