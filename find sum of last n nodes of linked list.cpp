//driver code ends here.
/*Structure of the node of the linled list is as

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};
*/
// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
     /*OM NAMAH SHIVAY!*/
     int count=0,sum=0;
     Node* temp1=head;
     Node* temp2=head;
     while(count<n-1){
         temp1=temp1->next;
         count++;
     }
     while(temp1->next!=NULL){
         temp1=temp1->next;
         temp2=temp2->next;
     }
     while(temp2!=NULL){
       sum=sum+temp2->data;
       temp2=temp2->next;
     }
     return sum;
}
