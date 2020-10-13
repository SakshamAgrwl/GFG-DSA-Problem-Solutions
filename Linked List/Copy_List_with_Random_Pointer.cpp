class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){
            return head;
        }
        Node* tempHead=head;
        while(tempHead){
            Node* temp=tempHead->next;
            Node* newNode=new Node(tempHead->val);
            tempHead->next=newNode;
            newNode->next=temp;
            tempHead=temp;
        }
        tempHead=head;
        while(tempHead){
            if(tempHead->next){
                tempHead->next->random= (tempHead->random) ? tempHead->random->next : tempHead->random; 
            }
            tempHead=(tempHead->next) ? tempHead->next->next : tempHead->next;
        }
        Node* copy=head->next;
        Node* curr=head;
        Node* ans=copy;
        while(curr && copy){
            curr->next= (curr->next) ? curr->next->next : curr->next;
            copy->next=(copy->next) ? copy->next->next : copy->next;
            
            curr=curr->next;
            copy=copy->next;
            
        }
        return ans;
    }
};
