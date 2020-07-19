/*OM NAMAH SHIVAY!*/
/*Reverse array in group*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(long long int i=0;i<n;i++){
         cin>>a[i];
     }
        //reverse the new array
         for (int low = 0, high = k - 1; low < high; low++, high--){
      swap(a[low], a[high]);
   }
     
     
     for(long long int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
    }
    return 0;
}
