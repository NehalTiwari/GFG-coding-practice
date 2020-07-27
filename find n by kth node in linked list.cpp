//driver code ends here.
/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
int fractional_node(struct Node *head, int k)
{
    /*OM NAMAH SHIVAY!*/
    Node* temp= head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int r;
    if(count%k==0){
     r=count/k;}
    else{
        r=(count/k)+1;
    }
    int c=1;
    Node* fin=head;
    while(c<r){
        c++;
        fin=fin->next;
    }
    return fin->data;
}
