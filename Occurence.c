#include<stdio.h>
void main(){
    int i,j,n,A[30];
    printf("Enter the number of elements ");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int count;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i]==A[j]){
               count++;
            }
        }
        printf("The element %d occured %d times\n",A[i],count);
        count=0;
    }
}