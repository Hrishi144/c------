#include<stdio.h>
void main(){
    int A[30],i,j,n,temp;
     printf("Enter the number of elements in the array: ");
     scanf("%d",&n);
     printf("\nEnter the %d elements in the array",n);
     for(i=0;i<n;i++){
        scanf("%d",&A[i]);
     }
     printf("The Entered elements are....\n");
     for(i=0;i<n;i++){
        printf("%d\t",A[i]);
     }
     int min;
     for(i=0;i<n-1;i++){
         min=i;
         for(j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
         }
         if(min!=i){
             temp=A[i];
             A[i]=A[min];
             A[min]=temp;
         }
     }
     printf("The sorted array is.....\n");
     for(i=0;i<n;i++){
        printf("%d\t",A[i]);
     }
}
