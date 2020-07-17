/*OM NAMAH SHIVAY!*/
#include <iostream>
using namespace std;

int main() {
	/*input*/
	int t;
	long long int n;
	cin>>t;
	while(t--){
	cin>>n;
	long long int arr[n-1];
	long long int x=0;
	for(int i=0;i<n-1;i++){
	  cin>>arr[i];
	  x=x+arr[i];
	}
    /*processing*/
    long long int s;
    s=(n*(n+1))/2;
    cout<<s-x<<endl;
	}
	return 0;
}
