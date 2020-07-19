/*OM NAMAH SHIVAY*/
/*Leaders in an array*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int count=0;
         for(long long int i=0;i<n;i++){
           for(long long int j=i+1;j<n;j++){
               if(a[i]>a[j]){
                   count++;
               }
                cout<<a[i]<<" "
        }
       cout<<a[n-1];
    }
    return 0;
}
