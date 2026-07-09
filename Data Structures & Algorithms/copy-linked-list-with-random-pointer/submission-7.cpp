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
      vector<int> vt;
      Node* hold=head; 
      Node* newhead=nullptr;
      Node* tail=nullptr;
      while (hold!=nullptr){
            Node* temp=new Node(0);
            temp->val=hold->val;
            if (newhead==nullptr){
            
            newhead=temp;
            tail=temp;
            }
            else{
              tail->next=temp;
              tail=temp;

            }
            int po=getPosition(head,hold->random);      
            vt.push_back(po);

            hold=hold->next;
            
      }
        Node* temp=newhead;
        for (int i=0; i<vt.size();++i){
            
             Node* posNode=getPositionNode(newhead, vt[i]);
             
             temp->random= posNode;
             temp=temp->next;
             
        }
            
       return newhead;


      }

      int getPosition(Node* head,Node* ptr){
          if (ptr==nullptr){
            return 0;
          }
          Node* temp=head;
          int i=1;
          while (ptr!=temp){
                temp=temp->next;
                i++;

            }

        return i;

      }
      
      Node* getPositionNode(Node* head, int position){
           
           Node* temp=head;

           if (position==0){

            return nullptr;
           
           }

           while (position>1){
             temp=temp->next;
             position--;

           }
           
           return temp;
           




      }


    
};
