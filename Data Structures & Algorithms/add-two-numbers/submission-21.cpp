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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        ListNode* t1=l1;
        ListNode* t2=l2;
       

        
        
        int carry=0;
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        
        while (t1||t2||carry==1){
        int v1=0;
        int v2=0;
        
        if (t1){
            v1=t1->val;
            t1=t1->next;
        }
        if (t2){
            v2=t2->val;
            t2=t2->next;
        }
        ListNode* temp=new ListNode();
        if (v1+v2+carry<10){

            temp->val=(v1+v2+carry);
            carry=0;
        }
        else{

             temp->val=(v1+v2+carry-10);
             carry=1;

        }
        if (head==nullptr){
           head=temp;
            tail=temp;
        }

        else{

            tail->next=temp;
            tail=temp;
        }
        
        

        }
        
           
            


        
        
        
     return head;
    }
};
