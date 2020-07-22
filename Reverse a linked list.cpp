//Driver code ends here.

/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/
/*OM NAMAH SHIVAY!*/

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node *prev, *current,*next;
    current= head; /*current takes up the head of original LL*/
    prev = NULL; /*since it has to follow current it takes up NULL initially*/
    /*iterations using while loop*/
    while(current!=NULL){
        next = current ->next; //next becomes the "next" link of current node
        current->next= prev ; //"next" link assigned to prev of current node
        prev=current; //prev becomes current
        current=next; //current becomes next
    }
    head=prev; //finally the new head is which the prev points to at the end of loop.
    return head; //returning head of reversed LL.
}
