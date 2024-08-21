#include<stdio.h>
void main()
{
 int n,a[100],i,j,temp,time=0;
 time++;
 printf("enter the number of elements");
 time++;
 scanf("%d",&n);
 time++;
 printf("enter the elements");
 time++;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  time++;
 }
 time++;
  for(i=0;i<n;i++)
  {
   temp=a[i];
   j=i-1;
   time++;
   while(j>=0 && a[j]>temp)
    {
     a[j+1]=a[j];
     j--;
    }
    a[j+1]=temp;
   }
    printf("sorted list\n");
    time++;
    time++;
    for(i=0;i<n;i++)
    {
     printf("%d\t",a[i]);
     time++;
    }
     printf("\nthe space complexity=%d",(n*4)+(5*4));
     time++;
     printf("\ntime complexity is =%d",time+1);
     }
     

