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
        queue<int> q1;
        queue<int> q2;
        
        ListNode* t1=l1;
        ListNode* t2=l2;

        while (t1){
            q1.push(t1->val);
            t1=t1->next;


        }

        while (t2){
            q2.push(t2->val);
            t2=t2->next;

        }
        int v1;
        int v2;
        int carry=0;
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        while(!q1.empty()&&!q2.empty()){
        v1=q1.front();
        q1.pop();
        v2=q2.front();
        q2.pop();
        
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
        
           
            


        
        while (!q1.empty()){
           v1=q1.front();
             q1.pop();
            ListNode* temp=new ListNode();
            if (v1+carry<10){

            temp->val=(v1+carry);
            carry=0;
            }
            else{

             temp->val=(v1+carry-10);
             carry=1;

            }
            tail->next=temp;
            tail=temp;

        }
        
        while (!q2.empty()){
           v2=q2.front();
             q2.pop();
            ListNode* temp=new ListNode();
            if (v2+carry<10){

            temp->val=(v2+carry);
            carry=0;
            }
            else{

             temp->val=(v2+carry-10);
             carry=1;

            }
            tail->next=temp;
            tail=temp;

        }
        if (carry==1){
            ListNode* temp=new ListNode();
            temp->val=1;
            tail->next=temp;
            tail=temp;
            }
        
     return head;

    }
};
