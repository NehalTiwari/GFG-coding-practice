//driver code ends here.
/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    /*OM NAMAH SHIVAY*/
    Node* prev=head;
    Node* current= head->next;
    if(head==NULL){
        return;
    }
    while(prev!=NULL && current!=NULL){
        prev->next=current->next; //so that "next" of prev can point to "next" of deleted node.
        free(current);
        prev=prev->next;
        if(prev!=NULL){
        current=prev->next;}
    }
}
