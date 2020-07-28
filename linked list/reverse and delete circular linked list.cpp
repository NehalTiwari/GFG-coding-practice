//driver code ends here.

void deleteNode(struct Node **head, int key)
{

    if (*head == NULL) 
        return; 
    if((*head)->data==key && (*head)->next==*head) 
    { 
        free(*head); 
        *head=NULL; 
        return; 
    } 
    Node *last=*head,*d; 
    if((*head)->data==key) { 
        while(last->next!=*head) 
            last=last->next; 
        last->next=(*head)->next; 
        free(*head); 
        *head=last->next; 
    } 
        while(last->next!=*head&&last->next->data!=key) { 
        last=last->next; 
    } 
    if(last->next->data==key) { 
        d=last->next; 
        last->next=d->next; 
        free(d); 
    } 

}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
    if (*head_ref == NULL) 
        return; 
    Node* prev = NULL; 
    Node* current = *head_ref; 
    Node* next; 
    do { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } while (current != (*head_ref)); 
    (*head_ref)->next = prev; 
    *head_ref = prev; 


}
