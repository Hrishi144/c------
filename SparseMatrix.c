#include<stdio.h>
void main (){
        int i,j,r,c;
    printf("Enter the number of rows and column");
    scanf("%d %d",&r,&c);
        int A[r][c], B[20][3];
    printf("Enter the elements of rows and column");
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
    scanf("%d",&A[i][j]);
 }
  }
    printf("The entered matrix is \n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",A[i][j]);
        } printf("\n");
}
 int k=1; 
B[0][0]=r;
B[0][1]=c;
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(A[i][j]!=0){
            B[k][0]=i;
            B[k][1]=j;
            B[k][2]=A[i][j];
            k++;
        }
    }
} B[0][2]=k-1;
 printf("The sparse matrix representation is...");
 for(i=0;i<k;i++){
    printf("\n%d\t%d\t%d ",B[i][0],B[i][1],B[i][2]);
 }
}
