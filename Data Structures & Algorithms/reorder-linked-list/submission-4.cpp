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
         
         if (head==nullptr) return;
         
         
         ListNode* sptr=head;
         ListNode* fptr=head->next;
         
         while(fptr!=nullptr&&fptr->next!=nullptr){         //split the linked list use slow and fast pointer
              sptr=sptr->next;
              fptr=fptr->next->next;
         }
         ListNode* newhead=sptr->next;
         
         sptr->next=nullptr;     //end first linked list 
         ListNode* newtail=nullptr;
         ListNode* temp;
         while(newhead!=nullptr){       //reverse the 2nd linked list
                  temp=newhead->next;
                  newhead->next=newtail;
                  newtail=newhead;
                  newhead=temp;

         }
        newhead=newtail;  //find the head of the reversed linked list
        
        ListNode* first=head;
        ListNode* temp1;
        ListNode* temp2;
        while(newhead!=nullptr){
        temp1=first->next;
        temp2=newhead->next;
        first->next=newhead;
        newhead->next=temp1;
        first=temp1;
        newhead=temp2;
        }

           
        

        

    }

};
