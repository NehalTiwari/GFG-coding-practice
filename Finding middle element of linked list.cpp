//driver code ends here

/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
/*OM NAMAH SHIVAY!*/
int getMiddle(Node *head)
{
   int c=1,n=0,mid;
   Node *p= head;
   /*counting number of elements in LL*/
   while(p!=NULL){
       n++;
       p= p->next;
   }
   mid=(n/2)+1;
   /*reaching the the middle mode*/
   while(c<mid){
       c++;
       head= head->next;}
    /*returning the middle node*/
    return head->data;
}
  
