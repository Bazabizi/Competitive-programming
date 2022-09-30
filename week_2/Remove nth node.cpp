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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node=head;
        int x=1,y=1;
        
        while(node!=NULL)
        {
            x++;
            node=node->next;
        }
        node=head;
        
        if(n==1 && x!=2)
        {
            while(node->next->next!=NULL)
            {
                node=node->next;
            }
            node->next=NULL;
                
        }
        else{
             if(x==2)
            {
                head=NULL;
            }
            else if(x>2)
            {
                while(node!=NULL)
                {
                    if(y==x-n)
                    {
                    ListNode* temp=node->next;
                    node->val=temp->val;
                    node->next=temp->next;
                    }
                    node=node->next;
                    y++;
                }
            }
        }
        return head;
    }
};
