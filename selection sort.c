#include<stdio.h>
void main()
{
    int i,j,n,a[100],x,temp,min,time=0;
    time++;
    printf("Enter the number of elements");
     time++;
    scanf("%d",&n);
     time++;
    printf("Enter the  elements");
     time++;
      time++;
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
         time++;
     }
      time++;
       time++;
     for(i=0;i<n-1;i++)
     {
       min=i;
       for(j=i+1;j<n;j++)
       {
         if(a[j]<a[min])
         {
            min=j;
         }
       }
       if(min!=i)
       {
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
       }
     }
     printf("the sorted elements is");
      time++;
       time++;
    for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
         time++;
     }
     printf("\n the space complexity=%d",(n*4)+(7*4));
     time++;
     printf("\n time complexity is %d",time+1);
}