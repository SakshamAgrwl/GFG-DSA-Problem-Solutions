// Solution to Reorder List Problem : https://practice.geeksforgeeks.org/problems/reorder-list/0

/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/


Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;

    while(curr){
        Node* nxt = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = nxt;
    }

    return prev;
}

void reorderList(Node* head) {
    Node* slow = findMid(head);
    
    Node* mid = slow->next;
    slow->next = NULL;

    mid = reverse(mid);

    Node* curr = head;

    while(curr && curr->next){
        Node* temp1 = curr->next;
        Node* temp2 = mid->next;

        curr->next = mid;
        curr->next->next = temp1;
        curr = temp1;
        mid = temp2;
    }
    
    if(mid){
        curr->next = mid;
    }
}