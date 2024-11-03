#include<stdio.h>
void sort(int n,int A[20]){
    int temp,i,j;
   for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
   }
}
void main(){
    int search, i,j,temp,mid,first,last,n;
    int A[50];
    printf("enter the number of elements you want to enter :");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    } printf("The entered array is\n ");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    int flag=0;
    for(i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            flag=1;
        }
    }
        if(flag==1){
            printf("\nThe Array is Unsorted....\n");
            sort(n,A);
        } printf("The sorted array is \n ");
        for(i=0;i<n;i++){
            printf("%d\t",A[i]);
        }
        printf("\nEnter the element to be searched");
        scanf("%d",&search);
        first=0;
        last=n-1;
        int found=0;
        while(first<=last){
            mid=(first+last)/2;
            if(search==A[mid]){
               found=1;
               break;
            } else if(search>A[mid]){
                first=mid+1;
            } else if(search<A[mid]){
                last=mid-1;
            }
        } if(found==0){
            printf("\nThe element is not present in the given array");
        } else{
            printf("\nThe element is found at the location %d" ,mid+1);

        }
    
}
