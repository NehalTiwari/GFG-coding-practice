//driver code ends here.
/*Struture of the node of the linked list is as:

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int modularNode(Node* head, int k)
{
	/*OM NAMAH SHIVAY!*/
	Node* temp=head;
	int count=0;
	while(temp!=NULL){
	    count++;
	    temp=temp->next;
	}
	if(count>k){
	int m=(count/k);
	int reqn=k*m;
	Node* fin=head;
	int c=0;
	while(c<reqn-1){
	    c++;
	    fin=fin->next;
	}
	return fin->data;}
	else{
	    return -1;
	}
}
