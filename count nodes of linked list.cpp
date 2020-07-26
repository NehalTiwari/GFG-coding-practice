//driver code ends here.
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

// head : reference to head of linked list
int getCount(struct Node* head){
    /*OM NAMAH SHIVAY!*/
    Node* current=head;
   long long  int count=0;
   while(current!=NULL){
       count++;
       current=current->next;
   }
   return count;

}
