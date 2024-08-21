#include<stdio.h>
void main()
{
  int i,n,x,count=0,a[70],c=0;
  c=c+2;
  c++;
  i++;
  printf("enter the number of elements");
  c++;
  scanf("%d",&n);
  c++;
  printf("enter the elements");
  c++;
  for(i=0;i<n;i++)
  {
  c++;
   scanf("%d",&a[i]);
   c++;
   }
   c++;
   printf("enter the number to be searched");
   c++;
   scanf("%d",&x);
   c++;
   for(i=0;i<n;i++)
   {
   c++;
    if(a[i]==x)
    {
    printf("number is found at the location %d",i+1);
    count++;
    c++;
    
    }}
    c++;
    c++;
    if(count>0)
    {
     printf("\n number is found %d",count);
     c++;
     }
     else
     {
     printf("\n the number is not found");
     c++;
     }
     printf("\n space complexity=%d",(n*4)+(5*4));
     c++;
     printf("\n time complexity=%d",c+1);
     }
