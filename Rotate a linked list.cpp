//Driver code ends here.

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

// This function should rotate list counter-clockwise
// by k and return new head (if changed)
Node* rotate(Node* head, int k)
{
    /*OM NAMAH SHIVAY!*/
   
    Node* current= head;
    int count =1;
    while(count<k && current!=NULL){
        current= current -> next;
        count++;
    }
   
    Node *kthnode = current;
    while(current->next !=NULL){
       current=current->next; 
    }
    current->next=head;
    head=kthnode->next;
    kthnode->next=NULL;
    return head;
}
