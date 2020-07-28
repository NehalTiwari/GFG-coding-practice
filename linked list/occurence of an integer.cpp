//driver code ends here

/*
  Return the no. of times search_for value is there in a linked list.
  The input list will have at least one element  

  Node is defined as 
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/

int count(struct node* head, int search_for)
{
/*OM NAMAH SHIVAY!*/
node* count= head;
int n=0,ans=0;
while(count!=NULL){
    n++;
    count=count->next;
}
node* temp=head;
while(n--){
    if(temp->data==search_for){
        ans++;
    }
    temp=temp->next;
}
return ans;

}
