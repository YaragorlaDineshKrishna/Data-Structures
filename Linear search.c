#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[10],i,key,found=0,pos,n;
 printf("Enter the size of an array:");
 scanf("%d",&n);
 printf("Enter the array elements:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the value of the search:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if(a[i]=key)
  {
   found=1;
   pos=i+1;
   break;}
  }
   if(found ==0)
     printf("not found in the list.");
   else
     printf("found in the list.");

return 0;
}
