/*OM NAMAH SHIVAY!*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(long long int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long long int count=0;
	     for(long long int i=0;i<n;i++){
	       if(a[i]==x){
	           count++;
	       }
	    }
	    if(count>0){
	    cout<<count<<endl;}
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
