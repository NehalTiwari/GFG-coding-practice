//driver code ends here.
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
	/*OM NAMAH SHIVAY!*/
    Node* fast= head;
    Node* slow= head;
    while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* temp=slow->next;
    slow->next= new Node(x);
    slow->next->next= temp;
    return head;
} 
