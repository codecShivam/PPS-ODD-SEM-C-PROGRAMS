#include<stdio.h>
void main(){
    int a[100],i,j,l,r,data,n,mid;
    printf("Enter no. of elements ");
    scanf("%d",&n);
    printf("Enter sorted array elements...\n ");
    for(i=0;i<n;i++){
        printf("enter element in [%d]:",i);
        scanf("%d",&a[i]);
    }


    printf("Given array is...\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    printf("\nEnter the data you want to search: ");
    scanf("%d",&data);
    l=0;
    r=n-1;
    while(l<=r){
        mid=l+r/2;
        if(data<a[mid]){
            r=mid-1;
        }
        else if(data==a[mid]){
            printf("%d found at the location %d",data,mid);
            break;
        }
        else{
            l=mid+1;
            mid=l+r/2;
        }
    }
    if(l>r){
        printf("%d is not present in the array",data);
    }
}