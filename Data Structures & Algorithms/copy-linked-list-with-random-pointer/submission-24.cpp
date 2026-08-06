/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         
         Node* hold=head;
         unordered_map<Node*,Node*> dup;
         
         while(hold){
             
             Node* temp=new Node(hold->val);
             dup[hold]=temp;
             hold=hold->next;
             

         }

         Node* newhead=dup[head];
         hold=head;
         while(hold){

              dup[hold]->next=dup[hold->next];
              dup[hold]->random=dup[hold->random];
              hold=hold->next;

         }
         return newhead;


    }
};
