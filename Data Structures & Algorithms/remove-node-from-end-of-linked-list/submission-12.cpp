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
        
        if (n==0){

            return head;
        }
        
        ListNode* tail=nullptr;
        ListNode* temp;
        while(head!=nullptr){
            temp=head->next;
            head->next=tail;
            tail=head;
            head=temp;
        }
        
        
        
        
        ListNode* newhead=tail; //reverse and find the new head
        if (n==1){

            temp=newhead;
            newhead=newhead->next;
            delete temp;
            tail=nullptr;
            while(newhead!=nullptr){
            temp=newhead->next;
            newhead->next=tail;
            tail=newhead;
            newhead=temp;
            }  
            return tail;
        }
        

        
        
        int i=0;
        ListNode* previousNode=newhead; 
        while(i<n-2){                        //find the previousNode of the actual node that needs to be deleted
          
            previousNode=previousNode->next;
            i++;
        }

        
        if (previousNode!=nullptr && previousNode->next!=nullptr){  //delete and reconnect
            temp=previousNode->next;
            previousNode->next=temp->next;
            delete temp;
        }
        tail=nullptr;
        while(newhead!=nullptr){
            temp=newhead->next;
            newhead->next=tail;
            tail=newhead;
            newhead=temp;
        }
        return tail;
    }
};
