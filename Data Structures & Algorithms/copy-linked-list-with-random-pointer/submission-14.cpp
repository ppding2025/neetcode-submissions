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
        unordered_map<Node*,Node*> mp;
        
        Node* hold=head;
        while(hold){

            Node* temp=new Node(0);
            temp->val=hold->val;
            mp[hold]=temp;
            hold=hold->next;
        }
        
        Node* newhead=mp[head];
        hold=head;
        while (hold){

              mp[hold]->next=mp[hold->next];
              mp[hold]->random=mp[hold->random];

              hold=hold->next;
        }
        return newhead;
    }
};
