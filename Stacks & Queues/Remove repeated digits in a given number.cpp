#include <bits/stdc++.h>
using namespace std;

int main() {
	/*OM NAMAH SHIVAY!*/
	int t;
	cin>>t;
	while(t--){
	    long long int n,r=0;
	    cin>>n;
	    stack <int> s;
	    while(n!=0){
	        r=n%10;
	        if(s.empty()){
	            s.push(r);
	        }
	        if(s.top()!=r){
	        s.push(r);}
	        n=n/10;
	    }
	    while(!s.empty()){
	        cout<<s.top();
	        s.pop();
	       
	    }
	    cout<<"\n";
	}
	return 0;
}
