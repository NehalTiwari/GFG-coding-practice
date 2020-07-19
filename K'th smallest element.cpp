/*OM NAMAH SHIVAY!*/
/*K'th smallest element*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>k;
        sort(a,a+n);
        cout<<a[k-1]<<endl;
        }
    return 0;
}
