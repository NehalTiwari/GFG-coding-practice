/*OM NAMAH SHIVAY!*/
class Solution
{
  public:
    int minOperation(int n)
    {
        long long int count=0;
        while(n!=0){
        if(n%2==0){
            n=n/2;
            count++;
        }
        else{
            n=n-1;
            count++;
        }}
        return count;
    }
};

// { Driver Code Starts.
