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
        int size=0;
         
        ListNode* curr=head;

        while(curr){

            size++;
            curr=curr->next;

        }

        int indextoremove=size-n;
        
        ListNode dummy(0,head);
        
        curr=&dummy;
        
        while(indextoremove>0){

        curr=curr->next;
        indextoremove--;
        }
        curr->next=curr->next->next;


        return dummy.next;
    }
};
