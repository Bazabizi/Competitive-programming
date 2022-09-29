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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr;
        int count=0;
        ptr=head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        count=count/2;
        ptr=head;
        while(count>0)
        {
         ptr=ptr->next;
            count--;
        }
        return ptr;
    }
};
