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
       queue<int> q;
       ListNode* list1=l1;
       ListNode* list2=l2;
       int carry=0;
       int value;
       while (list1&&list2){
       
       value=list1->val+list2->val+carry;
       carry=0;
       if (value>9){

          value=value-10;
          carry++;

       }         
       q.push(value);
       list1=list1->next;
       list2=list2->next;
       }

       while (list1){

       value=list1->val+carry;

       carry=0;
       if (value>9){
           value=value-10;
           carry++;
       }    
       q.push(value);
       list1=list1->next;  
       }
       while (list2){

       value=list2->val+carry;

       carry=0;
       if (value>9){
           value=value-10;
           carry++;
       }    
       q.push(value);
       list2=list2->next;  
       }
       
       if (carry==1){
         q.push(1);

       }
       ListNode* head=nullptr;
       ListNode* tail=nullptr;
       
       while (!q.empty()){
          value=q.front();
          q.pop();
          ListNode* temp=new ListNode();
          temp->val=value;
          if (!head){
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
