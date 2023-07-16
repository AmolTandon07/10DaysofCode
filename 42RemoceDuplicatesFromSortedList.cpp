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
        if(head==NULL)
        {
            return head;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode* prev=head;
        ListNode* curr=head->next;
        ListNode* forward=curr->next;

        while(forward!=NULL)
        {
            if(prev->val==curr->val)
            {
                prev->next=forward;
                curr->next=NULL;
                curr=forward;
                forward=curr->next;
            }
            else
            {
                prev=curr;
                curr=forward;
                forward=curr->next;
            }
        }
        if(prev->val==curr->val) // for checking the last two elements.
        {
            prev->next=forward;
            curr->next=NULL;
        }
        return head;

    }
};
