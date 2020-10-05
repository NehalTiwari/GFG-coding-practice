
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n)
{
      /*OM NAMAH SHIVAY!*/
      Node* temp=head;
      int num=0;
      while(temp!=NULL){ //count number of nodes in LL
          num++;
          temp=temp->next;
      }
      if(num>=n){
        int req_node =num-n; //required node from starting
        Node* ans=head;
        for(int i=0;i<req_node;i++){  //we reach the node to be returned
          ans=ans->next;
        }
        return ans->data;}
      else{
        return -1;}
      
}
