#include<stdio.h>
void main()
{
 int n,a[100],flag,t=0,search,count=0,i,l,mid,r,time;
 time++;
 time++;
 printf("enter the number of elements");
 time++;
 scanf("%d",&n);
 time++;
 printf("enter the elements");
 time++;
 time++;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  time++;
  }
  printf("enter the elements to be searched");
  time++;
  scanf("%d",&search);
  time++;
  l=0;
  r=n-1;
  time++;
   while(l<=r)
  {
    mid=(l+r)/2;
    time++;
    if(search==a[mid])
   {
     flag=1;
     break;
    }
      else if(search>a[mid])
    {
      l=mid+1;
     }
       else if(search<a[mid])
     {
       r=mid-1;
     }}
       time++;
       if(flag==0)
      {
        printf("not found");
        time++;
      }
         else 
         {
         printf("element is found at the location %d",mid+1);
         time++;
       }
        printf("\nthe space complexity=%d",(n*4)+(10*4));
     time++;
     printf("\ntime complexity is =%d",time+1);
     }
  
