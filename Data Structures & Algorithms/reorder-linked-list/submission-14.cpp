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
    void reorderList(ListNode* head) {
        ListNode* fptr=head->next;
        ListNode* sptr=head;

        while(fptr&&fptr->next){

            sptr=sptr->next;
            fptr=fptr->next->next;


        }
        
        
        ListNode* newhead=sptr->next;
        sptr->next=nullptr; //end first list
        ListNode* newtail=nullptr;
        ListNode* temp;
        
        while(newhead){

        temp=newhead->next;
        newhead->next=newtail;
        newtail=newhead;
        newhead=temp;    
        }

        newhead=newtail;   //find the head of the 2nd list

        ListNode* l=head;
        ListNode* temp2;

        while(l&&newhead){
        temp=l->next;
        temp2=newhead->next;
        l->next=newhead;
        newhead->next=temp;     
        l=temp;
        newhead=temp2;
        }

        




        
    }
};
