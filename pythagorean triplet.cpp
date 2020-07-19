int pytha(vector<int>&A,int n)
{
    sort(A.begin(),A.end());
    for(int i = 2;i<n;i++)
    {
        int j = 0, k=i-1;
        int b = A[i]*A[i];
        while(j<k)
        {
            int a = A[j]*A[j] + A[k]*A[k] ;
            if(a == b)
            {
                return 1;
            }
            else if(a<b)
                j++;
            else k--;
            
        }
    }
    return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>A(n);
	    for(int i = 0;i<n;i++)
	        cin >> A[i];
	    int triplet = pytha(A,n);
	    if(triplet == 1)
	        cout << "Yes" << endl;
	    else cout << "No" << endl;     
	}
	return 0;
}
