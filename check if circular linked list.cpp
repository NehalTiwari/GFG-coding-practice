//driver code ends here

/* Link list Node 
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

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   /*OM NAMAH SHIVAY!*/
   if(head==NULL){
       return true;
   }
   Node* temp=head->next;
   while(temp!=NULL && temp!=head){
       temp=temp->next;
   }
   if(temp==head){
       return true;
   }
   else{
       return false;
   }
   
}
