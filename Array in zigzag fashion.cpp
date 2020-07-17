/*OM NAMAH SHIVAY*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0){
	            if(a[i]>a[i+1]){
	                swap(a[i],a[i+1]);
	            }
	        }
	        else{
	            if(a[i]<a[i+1]){
	                swap(a[i],a[i+1]);
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	   
	}
	
	return 0;
}
