//driver code ends here.
/*structure of a node of the linked list is as
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
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     /*OM NAMAH SHIVAY*/
     Node* current= head;
     int count=0;
     while(current!=NULL){
         count++;
         current=current->next;
     }
     int q;
     if(count%2==0){
         q=0;
     }
     else if(count%2!=0){
         q=1;
     }
     return q;
}
