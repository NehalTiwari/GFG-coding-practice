//driver code ends here.
/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// This function should return true if both 
// linked lists are identical else return false.
bool areIdentical(struct Node *head1, struct Node *head2)
{
    /*OM NAMAH SHIVAY!*/
    Node* a=head1;
    Node* b=head2;
    while(a!=NULL && b!=NULL){
        if(a->data != b->data){
            return false;
        }
        else{
           a=a->next;
           b=b->next;
        }
    }
    if(a==NULL && b==NULL){
        return true;
    }
}
