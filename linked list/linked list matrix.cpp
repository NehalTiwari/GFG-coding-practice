//driver code ends here.

/*structure of the node of the linked list is as

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};
*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]

Node* construct(int mat[MAX][MAX],int i,int j,int n){
    if(i>n-1 || j>n-1){
        return NULL;
    }
    Node* temp= new Node(mat[i][j]);
    temp->data= mat[i][j];
    temp->right=construct(mat,i,j+1,n);
    temp->down=construct(mat,i+1,j,n);
    return temp;
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
   /*OM NAMAH SHIVAY!*/
   int i=0;
   int j=0;
   return construct(mat,i,j,n);
}
