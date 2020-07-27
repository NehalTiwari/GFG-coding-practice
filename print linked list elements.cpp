//driver code ends here.
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
void display(Node *head)
{
  /*OM NAMAH SHIVAY!*/
  Node* temp= head;
  while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
  }
}
