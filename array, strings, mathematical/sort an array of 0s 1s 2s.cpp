void sort012(int a[], int n)
{
    /*OM NAMAH SHIVAY*/
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count0++;
        }
        else if(a[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        a[i]=0;
        }
    for(int j=count0;j<count0+count1;j++){
        a[j]=1;
    }
    for(int k=count0+count1;k<n;k++){
        a[k]=2;
    }
    
}
