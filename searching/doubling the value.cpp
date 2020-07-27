/*OM NAMAH SHIVAY!*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,b;
	    cin>>n>>b;
	    long long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   sort(a,a+n);
	   int max=a[n-1];
	   while(b<max+1){
	       if(binary_search(a,a+n,b)){
	           b=b*2;
	       }
	       else{
	          cout<<b;
	       }
	   }
	   cout<<b;
	    
	}
	return 0;
}
