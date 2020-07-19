/*OM NAMAH SHIVAY!*/
/*trapping rainwater*/
#include<bits/stdc++.h>
using namespace std;
int main(){
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
        for(long long int i=1;i<n;i++){
            if(a[i]<a[0]){
                count= count+(a[0]-a[i]);
            }
        }
        cout<<count;
        }
    return 0;
}
