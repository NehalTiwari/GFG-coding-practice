//driver code ends here.

/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
bool isPalindromeUtil(string s)
{
    int length = s.length(); 
    for (int i=0; i<length/2; i++) 
        if (s[i] != s[length-i-1]) 
            return false; 
  
    return true; 
}
bool compute(Node* root)
{
   /*OM NAMAH SHIVAY!*/
   string s="";
   while(root!=NULL){
       s.append(root->next);
       root=root->next;
   }
     return isPalindromeUtil(s); 
}
