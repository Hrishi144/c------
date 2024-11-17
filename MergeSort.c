#include<stdio.h>
void merge(int A[],int left,int right,int mid){
    int i=left,j=mid+1,k=0;
    int temp[right-left+1];
    while(i<=mid&&j<=right){
        if(A[i]<=A[j]){
            temp[k++]=A[i++];
        }else{
            temp[k++]=A[j++];
        }
    } while(i<=mid){
        temp[k++]=A[i++];
    }
    while(j<=right){
        temp[k++]=A[j++];
    }
    for(i=left,k=0;i<=right;i++,k++){
        A[i]=temp[k];
    }
} void mergesort(int A[],int left,int right){
    if(left<right){
    int mid=(right+left)/2;
    mergesort(A,left,mid);
    mergesort(A,mid+1,right);
    merge(A,left,right,mid);
}
} void main(){
    int A[20],n,i;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf(" \nthe array elements");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    mergesort(A,0,n-1);
     printf(" \nThe sorted array is:");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}
